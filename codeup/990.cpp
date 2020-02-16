#include<iostream>
#include<string.h>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	char a[10000];
	cin >> a;
	
	int len_a = strlen(a),sum = 0 ;
	
	for(int i=0; i < len_a ; i++){
		sum = +a[i];
	}
	
	
	if(sum % 3 == 0) cout << 1;
	else cout << 0;
	
	return 0;
}
