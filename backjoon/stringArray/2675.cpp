#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int t,r;
	
	cin >> t;
	
	string s;
	
	for(int i = 0 ; i < t ; i++){
		cin >> r;
		cin >> s;
		for(int j = 0 ; j < s.length() ; j++){
			for(int x = 0 ; x < r ; x++) {
				cout << s[j];
			}
		}
		cout <<  "\n";
	}
	
	return 0;
}
