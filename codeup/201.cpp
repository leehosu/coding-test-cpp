#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	if(num <0) cout << "음수";
	else if(num >0) cout <<"양수";
	else cout << 0 ;
}
