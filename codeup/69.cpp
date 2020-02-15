#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	char x,t='a';
	cin >> x;
	
	do{
		cout << t << " ";
		t+=1;
	}while(t <= x);

	return 0;
}
