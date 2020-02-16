#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int first = num / 10;
	int second = num % 10;
	
	int last = second *10 + first;
	
	int answer = last * 2 % 100;
	cout << answer<< "\n";
	
	if(answer <= 50) cout <<"GOOD";
	else cout <<"OH MY GOD";
	
	return 0;
}
