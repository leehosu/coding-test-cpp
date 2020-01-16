#include<iostream>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int array[9];
	int array_2[9];
	int index;
	
	for(int i = 0 ; i < 9 ; i++){
		cin >> array[i];
		array_2[i] = array[i];
	}
	
	sort(array,array+9);
	
	for(int i = 0 ; i < 9 ; i++){
		if(array[8] == array_2[i]){
			index = i+1;
		}
	}
	
	cout << array[8] << "\n";
	cout << index << "\n";
	return 0;
}
