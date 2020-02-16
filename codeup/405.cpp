#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int array[num];
	
	for(int i =0 ; i < num ; i++){
		cin >> array[i];
	}
	
	for(int i = 0 ; i < num ; i++){
		for(int j = i ; j < i+num ; j++){
			cout << array[j%num] <<" ";
		}
		cout << "\n";
	}
	
	
	return 0;
}
