#include<stdio.h>
#include<iostream>

using namespace std; 


void bubbleSort(int *array){
	int temp;
	
	for(int i=0 ; i <= sizeof(array)+1 ;i++){
		for(int j = 0 ; j < (sizeof(array)+1) - i ; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<= sizeof(array)+1;i++){
		cout<< array[i] << " " << "\n";
	}
	
}

int main(){
	
	
	int array[10] = {3,4,5,2,10,9,8,6,7,1};
	
	bubbleSort(array);
	return 0;
}
