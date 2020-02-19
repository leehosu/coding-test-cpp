#include<iostream>
using namespace std;
int facSum = 1;

int fact(int n, int end){
	if(n < end) return facSum;
	else {
		facSum *= n;
		fact(--n,end);
	}
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int end = 1;
	cout << fact(n,end);

	return 0;
}
