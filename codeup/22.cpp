#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	char d[30];
	cin >> d;
	
	for(int i = 0 ; d[i] != '\0'; i++){
		cout << "\'"<< d[i] << "\'" <<"\n";
	}
	return 0;
}
