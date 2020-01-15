#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int A[num],B[num];
	
	for(int i = 0 ; i < num ; i++){
		cin >> A[num] >> B[num];
		cout << "Case #" << i+1 << ": " << A[num] + B[num] << "\n";
	}
	
	
	return 0;
}
