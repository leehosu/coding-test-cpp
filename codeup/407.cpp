#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	getline(cin,str);
	
	str.erase(remove(str.begin(),str.end(),' '),str.end());
	cout << str;
	
	return 0;
}
