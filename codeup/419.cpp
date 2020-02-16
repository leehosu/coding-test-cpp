#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	getline(cin,str);
	
	int count = 0 ;
	
	for(int i = 0 ; str[i] != '\0' ; i++){
		if(str[i] == 'l' &&str[i+1] == 'o' &&str[i+2] == 'v' &&str[i+3] == 'e' ){
			count++;
			i += 3;
		}
	}
	
	cout << count;
		
	return 0;
}
