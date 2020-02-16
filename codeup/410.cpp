#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	getline(cin,str);
	int count_in=0, count_out=0;
	
	for(int i=0;i<str.length();i++){
		char c = str[i];
		
		switch(c){
			case '(':
				count_in++;
				break;
			case ')':
				count_out++;
				break;
		}
	}
	
	cout << count_in << " " << count_out ;
	
	return 0;
}
