#include<iostream>
using namespace std;
int array[100001];

int stairs(int n){
	if( n < 0){
		return 0;
	}
	else if(n == 0){
		return 1;
	}
	else {
		if( array[n] != 0) return array[n];
		else return array[n] = (stairs(n-3) + stairs(n-2) + stairs(n-1))%1000;
	}
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	cout << stairs(n);
	
	return 0;
}
