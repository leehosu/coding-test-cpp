#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	char n;
	cin >> n;
	
	switch(n){
		case 'A':
			cout << "best!!!";
			break;
		case 'B':
			cout << "good!!";
			break;
		case 'C':
			cout << "run!";
			break;
		case 'D':
			cout << "slowly~";
			break;
		default:
			cout << "what?";
	}
			
	return 0;
}
