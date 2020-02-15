#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	char c;
	
	while(1){
		cin >> c;
		cout << c << "\n";
		if(c=='q') break;	
	}

	return 0;
}
