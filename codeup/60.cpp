#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	long long num;
	cin >> num;
	
	if(num < 0){
		cout << "minus" <<"\n";
		if(num % 2 ==0) cout << "even";
		else cout << "odd";
	}
	else {
		cout << "plus" << "\n";
		if(num % 2 ==0) cout << "even";
		else cout << "odd";	
	}
		
	return 0;
}
