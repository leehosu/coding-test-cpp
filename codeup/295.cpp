#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	
	cin >> str;
	
	char c;
	
	for(int i = 0 ; i <str.length();i++){
		c = str[i];
		
		if(c >= 'A' && c <='Z') {
			c = c-'A'+'a';
			cout << c;
		}
		else if(c>='a' && c <= 'z'){
			c = c-'a'+'A';
			cout << c;
		} 
		else cout << c ;
	}
	
	return 0;
}
