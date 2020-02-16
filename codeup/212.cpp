#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	
	int a,b,c;
	cin >> a >> b >> c;
	
	if(a > b){
		if( c > a) {
			if(c < a+b) cout << "yes";
			else cout << "no";
		}
		else if( a > c){
			cout << "no";
		}
		else cout << "no";
	}
	else if( b > a){
		if( c > b) {
			if(c < a+b) cout << "yes";
			else cout << "no";
		}
		else if( b > c) cout << "no";
		else cout << "no";
	}
	else {
		if(c < a+b) cout << "yes";
		else cout << "no";
	}
	
	return 0;
}
