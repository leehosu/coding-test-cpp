#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	
	cin >> num;
	
	if(num < 101 && num >= 90) cout << "A";
	else if(num < 90 && num >= 70) cout << "B";
	else if(num < 70 && num >= 40) cout << "C";
	else cout << "D";
			
	return 0;
}
