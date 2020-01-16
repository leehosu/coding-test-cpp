#include<iostream>

using namespace std;

int digit(int a, int b){
	return a % 10*b;
}


int kaprekar(int num){
	
	int len = num;
	int count = 0;
	int sum = 0 ;
	do {
		num = int(num/10);
		count++;
	}while(num > 0);
	
	sum = num + digit(num,count);
	
	return sum;
}

int main(){
	
	cout << kaprekar(100) << "\n";
		
	
	return 0;
}
