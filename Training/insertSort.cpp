#include <stdio.h>
#include <iostream>
using namespace std; 


void insertSort(int array[]){
	int temp;
	for(int i = 0 ; i < sizeof(array)+1 ; i++){
//		int j = i;
		while(array[i] > array[i+1]){
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
			i--;
		}
	}
	
	for(int i=0;i<= sizeof(array)+1 ; i++){
		cout << array[i] << "\n";
	}
}

int main(){
	
	int array[10] = {1,5,10,9,6,8,2,4,5,7};
	
	insertSort(array);
	
	return 0;
}
