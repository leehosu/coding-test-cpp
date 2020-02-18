#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	long long t = 0;
	
	for(int i = num/3 + (num%3 != 0) ; i < num / 2 + num % 2 ; i++){
		t += i - ((num-i) / 2 + (num - i) % 2) + 1;
	}
	
	cout << t;
	
	
	
	return 0;
}
