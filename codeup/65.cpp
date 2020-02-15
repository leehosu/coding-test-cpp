#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	int array[num];
	for(int i = 0 ; i < num ; i++){
		cin >> array[i];
		cout << array[i] << "\n";
	}
	return 0;
}
