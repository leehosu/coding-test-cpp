#include<iostream>
using namespace std;
bool array[10000];

int kaprekar(int num){
	
	int sum = num;
	
	while(1){
		if(num==0) break;
		sum += num % 10;
		num = num/10;
	}
	return sum;
}


int main(){
	for(int i = 0 ; i <= 10000 ; i++){
		int idx = kaprekar(i);
		
		if(idx <= 10000){
			array[idx] = true;
		}
	}
	
	for(int i = 1 ; i <= 10000 ; i++){
		if(!array[i]) cout << i << "\n";
	}
	
	return 0;
}
