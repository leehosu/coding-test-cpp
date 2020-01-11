#include <stdio.h>
#include <iostream>
using namespace std;

void selectSort(int array[]){
	int min,temp, index;
	
	for(int i = 0 ; i <= sizeof(array)+1;i++){
		min = 9999;
		for( int j = i ; j <= sizeof(array)+1;j++){
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		}
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
	}
	for(int i=0;i<10;i++){
			cout << array[i] << " " << "\n";
		}
}

int main(void){
	int array[10] = {5,3,1,123,234,2,1,21,321,10};
	
	selectSort(array);
	
	return 0;
	
}
