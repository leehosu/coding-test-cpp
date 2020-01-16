#include<iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int array[8];
	int asc_array[8];
	int des_array[8];
	int asc_count=0;
	int des_count=0;
	
	for(int i=0; i < 8 ; i++){
		cin >> array[i];
		asc_array[i] = array[i];
		des_array[i] = array[i];
	}
	
	sort(asc_array,asc_array+8);
	sort(des_array,des_array+8,compare);
	
	for(int i = 0 ; i < 8 ; i++){
		if(array[i] == asc_array[i]){
			asc_count++;
		}
		else if(array[i] == des_array[i]){
			des_count++;
		}
	}
	
	if(asc_count == 8){
		cout << "ascending" << "\n";
	}
	else if(des_count == 8){
		cout << "descending" << "\n";
	}
	else cout << "mixed" << "\n";
	return 0;
}
