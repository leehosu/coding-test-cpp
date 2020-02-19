#include<iostream>
using namespace std;

void woo(int n){
	if(n == 1) return;
	if(n % 2 != 0){
		int oddNum = 3 * n + 1;
		cout << oddNum <<"\n";
		woo(oddNum);
	}
	else if(n % 2 ==0){
		int evenNum = n / 2;
		cout << evenNum << "\n";
		woo(evenNum);
	}
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cout << n << "\n";
	woo(n);
	
	return 0;
}
