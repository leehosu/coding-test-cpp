#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b;
	char c;
	cin >> a >> c>> b;
	
	switch(c){
		case '+':
			cout << a+b;
			break;
		case '-':
			cout << a-b;
			break;
		case '*':
			cout << a*b;
			break;
		case '/':
			cout<<fixed;
			cout.precision(2);
			cout << double(a)/b;
			break;
		default:
			break;
	}
	
	
	return 0;
}
