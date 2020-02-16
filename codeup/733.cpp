#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;
	
	if(str == "IOI") cout << str << " is the International Olympiad in Informatics." ;
	else cout << "I don't care.";
	
	return 0;
}
