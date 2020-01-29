#include<iostream>
#include<algorithm>
using namespace std;

void BinarySerch(int *arr, int low, int high, int findValue)
{
	if (low > high)
	{
        cout << 0 << "\n";
		return;
	}
	else
	{
		int mid = (low + high) / 2;
		if (findValue > arr[mid])
		{
			return BinarySerch(arr, mid+1, high, findValue);
		}
		else if (findValue < arr[mid])
		{
			return BinarySerch(arr, 0, mid-1, findValue);
		}
		else
		{
            cout << 1 << "\n";
			return;
		}
	}
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int A[N];
	
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	
	
	int M;
	cin >> M;
	
	int B[M];
	
	for(int i = 0 ; i < M ;i++){
		cin >> B[i];
	}
	
	sort(A,A+N);
	
	for(int i = 0 ; i < M ; i++){
		BinarySerch(A, 0, M-1, B[i]);
	}
	
	return 0;
}
