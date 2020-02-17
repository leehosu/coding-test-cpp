#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	long long a,b;
	cin >> a >> b;
	
	if(a>b) cout << a;
	else if(a<b) cout << b;
	else cout << a;
	
	return 0;
}
