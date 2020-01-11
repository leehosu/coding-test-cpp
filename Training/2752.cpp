#include <stdio.h>
#include <iostream>
using namespace std; 

int array[3];

void selectSort(int *array){
	int min,temp, index;
	
	for(int i = 0 ; i < 3;i++){
		min = 1000001;
		for( int j = i ; j <3;j++){
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		}
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
	}
	for(int i=0;i<3;i++){
			printf("%d",array[i]);
		}
}

int main(){
	
	for( int i = 0 ; i<3;i++){
		cin >> array[i];
	}
	
	selectSort(array);
}
