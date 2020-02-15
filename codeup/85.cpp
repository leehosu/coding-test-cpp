#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int a,b,c;
	cin >> a >> b >> c;
	
	int day = 1;
	while(day%a!=0||day%b!=0||day%c!=0) day++;
	cout << day;
	
	return 0;
}
