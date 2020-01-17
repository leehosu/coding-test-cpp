#include<iostream>
using namespace std;
string alphabet = "abcdefghijklmnopqrstuvwxyz";

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	string input;
	cin >> input;
	
	for(int i = 0 ; i < alphabet.length();i++){
		if(input.find(alphabet[i])==string::npos){
			cout << -1 << " ";
		}else{
			cout << input.find(alphabet[i]) << " ";
		}
	}
	
	return 0;
}
