#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string s;
	int max_count=0, count=0;
	int index=0;
	int array[26] = {0};
	
	cin >> s;
	
	for(int i = 0 ; i < s.length() ; i++){
		int temp = s[i];
		
		if( temp < 97 ) array[temp-65]++;
		else array[temp-97]++;
	}
	
	for( int i = 0 ; i < 26 ; i++){
		if(array[i] > max_count){
			max_count = array[i];
			index = i;
		}
	}
	
	for(int i = 0 ; i < 26 ; i++){
		if(array[i] == max_count){
			count++;
			
			if( count >= 2) {
				cout << "?" << "\n";
				return 0;
			}
		}
	}
	
	cout << (char)(index+65) << "\n";
	
	return 0;
}
