#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a;
	long long b;
	cin >> a >> b;
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	cout << a % b << "\n";
	cout<<fixed;
	cout.precision(2);
	cout << float(a) /float(b) << "\n";
	
	return 0;
}
