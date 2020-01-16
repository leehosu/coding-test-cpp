#include<iostream>
using namespace std;

int main(){

	int num, sum=0;
	
	cin >> num;
	
	if(num > 10001||num < 1){
		return 0;
	}
	
	for( int i = 1 ; i <= num ; i++){
		sum += i;
	}
	
	cout << sum << "\n";
	
	return 0;
}
