#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	int array[num];
	
	for(int i = 1 ; i <= num ; i++){
		cin >> array[i];
	}
	
	for(int i = num ; i >= 1 ; i--){
		cout << array[i] <<" ";
	}
	
	return 0;
}
