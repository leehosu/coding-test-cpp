#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	bool a,b;
	cin >> a >> b;
	if( a == 1 && b == 1) cout << 1;
	else cout << 0;
	
	return 0;
}
