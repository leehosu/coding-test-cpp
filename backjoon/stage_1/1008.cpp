#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cin >> a;
	cin >> b;
	
	cout.precision(10); 	//10�ڸ� ��� 
	cout << a/(double)b <<"\n";
	
	return 0;
}
