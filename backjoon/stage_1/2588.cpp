#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	
	int num_1,num_2;
	
	cin >> num_1 >> num_2;

	cout << num_1 * (num_2 % 10) << "\n";
	cout << num_1 * (num_2 % 100 / 10 ) << "\n";
	cout << num_1 * (num_2 / 100) << "\n";
	
	cout << num_1 * num_2 << "\n";
	
	return 0;
}
