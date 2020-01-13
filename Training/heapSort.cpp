#include <stdio.h>
#include <iostream>

using namespace std; 

int num = 9;
int heap[9] = {7,6,1,2,4,9,2,8};

int main(){
	// ��ü ������ �������� �����. 
	for(int i = 1; i<num;i++){
		int c = i;
		do{
			int root = (c-1)/2;	//Ư���� ������ �θ� ����Ű�� �ȴ�. 
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while ( c!=0);
	}
	
	// ũ�⸦ �ٿ����� �ݺ������� ���� ����
	for(int i = num -1 ; i >=0 ; i--){
		// ���� ū���� ���� �ڿ� �ִ� ���ҿ� �ٲ��ش�. 
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		 
		 
		// root ���� ���� 
		int root = 0;
		int c = 1;
	
		do{
			c = 2 * root +1;
			// �ڽĵ� �� ū �� ã�� 
			if(heap[c] < heap[c+1] && c < i-1){
				 c++; // �� ū ���� ã�� ����̹Ƿ� c ���� 
			}
			// ��Ʈ���� �ڽİ��� �� ũ�ٸ� ��ȯ
			if(heap[root] <heap[c] && c<i){
				// root���� �ڽİ��� �� ũ�ٸ� ��ġ�� �ٲ��ش�. 
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

