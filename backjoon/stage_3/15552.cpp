#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	
	cin >> num;
	
	int A[num],B[num];
	
	for( int i = 0; i < num ; i++){
		cin >> A[i] >> B[i];
	}
	
	for(int i = 0 ; i< num ;i++){
		cout << A[i] + B[i] << "\n";
	}
	
	return 0;
}
