#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;
	
	for(int i = 0 ; i < str.length() ; i++){
		char c = str[i];
		cout << char(c + 2);		
	}
	cout << "\n";
	
	for(int i = 0 ; i < str.length() ; i++){
		char c = str[i];
		cout << char((c*7) % 80 +48);	
	}
	return 0;
}
