#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	for(int i = 1 ; i <= num ; i++){
		for( int j = num-i ; j > 0 ;j--){
			cout << " " ;
		}
		for( int k = 0 ; k < i ; k++){
			cout<< "*";
		}
		cout << "\n";
	}
	
	return 0;
}
