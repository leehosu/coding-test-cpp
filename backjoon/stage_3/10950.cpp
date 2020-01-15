#include<iostream>
using namespace std;

int main(){

	int num;
	cin >> num;
	
	int A[num], B[num];
	
	for( int i = 0 ; i < num ; i++){
		cin >> A[i] >> B[i] ;
	}
	
	for( int i = 0 ; i < num ; i++){
		cout << A[i] + B[i] << "\n";

	}
	return 0;
}
