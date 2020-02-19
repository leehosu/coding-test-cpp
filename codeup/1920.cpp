#include<iostream>
using namespace std;

int bit(int num){
	if(num == 0 || num == 1) cout << num;
	else{
		bit(num / 2);
		cout << num % 2;
	}
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	bit(num);
	
	return 0;
}
