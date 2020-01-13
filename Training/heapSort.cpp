#include <stdio.h>
#include <iostream>

using namespace std; 

int num = 9;
int heap[9] = {7,6,1,2,4,9,2,8};

int main(){
	// 전체 구조를 힙구조로 만든다. 
	for(int i = 1; i<num;i++){
		int c = i;
		do{
			int root = (c-1)/2;	//특정한 원소의 부모를 가리키게 된다. 
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while ( c!=0);
	}
	
	// 크기를 줄여가며 반복적으로 힙을 구성
	for(int i = num -1 ; i >=0 ; i--){
		// 가장 큰값을 가장 뒤에 있는 원소와 바꿔준다. 
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		 
		 
		// root 원소 설정 
		int root = 0;
		int c = 1;
	
		do{
			c = 2 * root +1;
			// 자식들 중 큰 값 찾기 
			if(heap[c] < heap[c+1] && c < i-1){
				 c++; // 더 큰 값을 찾은 경우이므로 c 증가 
			}
			// 루트보다 자식값이 더 크다면 교환
			if(heap[root] <heap[c] && c<i){
				// root보다 자식값이 더 크다면 위치를 바꿔준다. 
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		}while( c < i);
	} 
	
	for(int i = 0 ; i < num ; i++){
		cout << heap[i] <<"\n";
	}
	
	return 0;
}

