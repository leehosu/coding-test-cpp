#include<iostream>
using namespace std;

int main(){
	
	int a,temp;	
	int count=0;
	
	cin >> a;
		
	temp = a;
	
	while (1) {
		if( a < 10) a = 0 + a;
		
		int first = a / 10;
		int second = a % 10;
		
		int newNum = ((first + second) % 10);
		
		a = second * 10 + newNum;
		count++;
		
		if(a == temp){
			break;
		}
	}
	cout << count << "\n";	
	return 0;
}
