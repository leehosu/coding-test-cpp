#include<iostream>
using namespace std;

int main(){
	
	int A, B, C ;
	
	cin >> A >> B >> C ;
	
	if( A > B){
		if( B > C) cout << B << "\n";
		else if( B < C) {
			if ( A > C) cout << C << "\n";
			else if( A < C) cout << A << "\n";
			else cout << A << "\n";
		}
		else cout << B << "\n";
	}else if ( A < B){
		if( B > C){
			if( A > C) cout << A << "\n";
			else if( A < C) cout << C << "\n";
			else cout << A << "\n";
		}else if ( B < C) cout << B << "\n";
		else cout << B << "\n";
	}else {
		if( A > C) cout << A << "\n";
		else if( A < C) cout << A << "\n";
		else cout << A << "\n"; 
	}
	
	
	return 0;
}
