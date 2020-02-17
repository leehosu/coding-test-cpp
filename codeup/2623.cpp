#include<iostream>
using namespace std;

int gcd(int a,int b){
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b;
	cin >> a>>b;
	
	cout << gcd(a,b);
	return 0;
}
