#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	long long a,b,c;
	
	cin >> a >> b >> c;
	cout << a+b+c<<"\n";
	cout << fixed;
	cout.precision(1);
	cout << float(a+b+c)/3 ;
	
	return 0;
}
