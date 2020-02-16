#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;
	
	if(!str.find("love",0)) cout << "I love you.";
		
	return 0;
}
