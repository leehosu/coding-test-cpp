#include<iostream>
using namespace std;

int reserve(int num){
	int reverse_num=0,temp=0;
	
	while(num){
		temp = num % 10;
		num = num / 10;
		reverse_num = reverse_num*10 + temp;
	}
	
	return reverse_num;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num1, num2 ;
	
	cin >> num1 >> num2;
	
	int reverse_num1=0, reverse_num2=0;
	
	reverse_num1 = reserve(num1);
	reverse_num2 = reserve(num2);
	
	if( reverse_num1 > reverse_num2) {
		cout << reverse_num1 ;
	}else cout << reverse_num2 ;
	
	return 0;
}
