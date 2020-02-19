#include<iostream>
using namespace std;

int mymax(int a, int b){
	if(a > b) return a;
	else if(a < b) return b;
	else return a;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b;
	cin >> a >> b;
	cout << mymax(a,b);
	
	return 0;
}
