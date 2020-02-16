#include<iostream>
using namespace std;

void answer(int num){
	cout << num;
	answer(num--);
	
	if(num ==0) return 0;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	answer(num);
	
	
	return 0;
}
