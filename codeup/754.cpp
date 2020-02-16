#include<iostream>
#include<string.h>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	char a[100];
	char b[100];
	cin >> a >> b;
	
	int len_a = strlen(a);
	int len_b = strlen(b);
	
	if(len_a != len_b){
		if(len_a > len_b) cout << b << " " << a;
		else if(len_a < len_b) cout << a <<" "<<b;
	}
	else{
		if(strcmp(a,b)){
			if(strcmp(a,b) > 0) cout << b << " " << a;
			else if(strcmp(a,b) < 0) cout << a << " " << b;
		}	
	}
	
	
	
	return 0;
}
