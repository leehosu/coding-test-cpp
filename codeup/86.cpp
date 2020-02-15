#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	int answer[24]={};
	int input;
	
	
	for(int i = 1; i <= num;i++){
		cin >> input;
		answer[input] = answer[input]+1;
	}
	
	for(int i = 1 ; i < 24 ; i++){
		cout << answer[i]<<" ";
	}
	
	return 0;
}
