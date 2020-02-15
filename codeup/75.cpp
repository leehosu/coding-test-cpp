#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int a;
	cin >> hex >> a;
	for(int i = 1 ; i < 16 ; i++){
		cout <<hex<< uppercase<<a << "*" << i <<"=" << a*i<<"\n";
	}
	return 0;
}
