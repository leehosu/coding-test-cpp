#include <stdio.h>

int array[10001];
int num;
	
int main(){
	
	scanf("%d",&num);
	
	for(int i = 0; i < num ; i++){
		int x;
		scanf("%d",&x);
		array[x]++;
	}
	
	for(int i =0 ; i<10001 ; i++){
		while(array[i] != 0){
			printf("%d\n", i);
			array[i]--;
		}
	}
	
	return 0;
} 
