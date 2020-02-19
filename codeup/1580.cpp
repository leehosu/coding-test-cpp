#include<iostream>
using namespace std;

float circle(int r){
	return 3.14 * r* r;
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int r;
	cin >> r;
	cout<<fixed;
	cout.precision(2);
	cout << circle(r);
	return 0;
}
