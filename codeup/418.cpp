#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;
	
	char c;
	for(int i = 0 ; i < str.length() ; i++){
		c = str[i];
		
		if(c == 't') cout << i+1 << " ";
	}
	
	return 0;
}
