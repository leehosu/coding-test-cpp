#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int front,back;
	char c;
	cin >> front >> c >>back;
	printf("%06d%07d",front,back);
	return 0;
}
