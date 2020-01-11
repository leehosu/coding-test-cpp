#include <stdio.h>
#include <iostream>
using namespace std; 

int array[1001];

void selectSort(int *array,int num){
	int min,temp, index;
	
	for(int i = 0 ; i < num;i++){
		min = 1001;
		for( int j = i ; j <num;j++){
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		}
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
	}
	for(int i=0;i<num;i++){
			cout << array[i] << " " << "\n";
		}
}

int main(){
	int num;
	
	cin >> num ;
	
	for( int i = 0 ; i<num;i++){
		cin >> array[i];
	}
	
	selectSort(array,num);
}
