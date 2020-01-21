#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int avgNum(int* array, int num){

	int sum = 0;
	double avg = 0;
	for(int i = 0 ; i < num ; i++){
		sum += array[i];
	}
	
	avg = (double)sum/num +0.5;
	
	return floor(avg);
}

int middleNum(int* array, int num){
	int middle = array[num/2];
	
	return middle;
}

int modeNum(int* array, int num){
	int mode = 1;
	int high = 1;
	int current = 0;
	
	for(int i=0 ; i <= num ; i++){
		current++;
		if(i == num || array[i] != array[i++]){
			if(current >= high){
				high = current;
				if(current >= 2){
					mode = array[i++];
				}
			}
			current = 0;
		}
	}

	return mode;
}

int rangeNum(int* array, int num){
	int range = 0;
	
	range = array[num-1] - array[0];
	
	return range;
} 


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int array[num];
	
	for(int i = 0 ; i < num ; i++){
		cin >> array[i];
 	}
 	
 	sort(array,array+num);

	cout << avgNum(array,num) << "\n";
	cout << middleNum(array,num) << "\n";
	cout << modeNum(array,num) << "\n";
	cout << rangeNum(array,num) << "\n";
	return 0;
}
