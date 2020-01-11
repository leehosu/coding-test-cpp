#include <stdio.h>
#include <iostream>
using namespace std; 

int num = 10;
int array[10] = {1,5,10,9,6,8,2,4,5,7};

void quickSort(int *array, int start, int end){
	if(start >= end){	//���Ұ� 1�� 
		return ;
	}
	
	int pivot = start;
	int i = start+1;
	int j = end;
	int temp;
	
	while(i<=j){	//�������� ���� 
		while(array[i] <= array[pivot]){	//pivot ������ ū ���� ���������� -> �̵� 
			i++;
		}
		while(array[j] >= array[pivot] && j > start){		//pivot������ ���� ���� ���������� <- �̵� &&  
			j--;
		}
		
		if(i > j){	//������ ���¸� ��ü  
			temp = array[j];
			array[j] = array[pivot];
			array[pivot] = temp;
		}
		else {	//�������� �ʾҴٸ� 
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
