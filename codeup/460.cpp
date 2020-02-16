#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	 
	for(int i = 1 ; i <= num ; i++){
		for(int j = num ;j>=1 ;j--){
				cout << (i-1)*num+j << " ";
		}
		cout << "\n";
	}
	return 0;
}
