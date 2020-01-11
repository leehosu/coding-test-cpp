#include <stdio.h>
#include <iostream>
using namespace std; 

int num = 10;
int array[10] = {1,5,10,9,6,8,2,4,5,7};

void quickSort(int *array, int start, int end){
	if(start >= end){	//원소가 1개 
		return ;
	}
	
	int pivot = start;
	int i = start+1;
	int j = end;
	int temp;
	
	while(i<=j){	//엇갈릴때 까지 
		while(array[i] <= array[pivot]){	//pivot 값보다 큰 값을 만날때까지 -> 이동 
			i++;
		}
		while(array[j] >= array[pivot] && j > start){		//pivot값보다 작은 값을 만날때까지 <- 이동 &&  
			j--;
		}
		
		if(i > j){	//엇갈린 상태면 교체  
			temp = array[j];
			array[j] = array[pivot];
			array[pivot] = temp;
		}
		else {	//엇갈리지 않았다면 
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	quickSort(array, start, j-1);
	quickSort(array, j+1, end);
}

int main(){
	
	
	quickSort(array,0,num-1);
	
	for(int x = 0 ; x < num ; x++){
		cout << array[x] << "\n";
	}
	
	return 0;
}
