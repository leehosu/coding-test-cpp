#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std; 

int array[1000001];


int main(){

	int num;
	cin >> num;
	
	for(int i = 0;i<num;i++){
		cin >> array[i];
	}
	
	sort(array,array+num);
	
	for(int x = 0 ; x < num ; x++){
		cout << array[x] << "\n";
	}
	
	return 0;	
}

