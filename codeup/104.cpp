#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b;
	cin >> hex >> a >> b;
	
	if(a>b) cout << b << a;
	else cout << a << b;

	return 0;
}
