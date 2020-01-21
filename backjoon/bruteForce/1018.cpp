#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int col, row ;
	cin >> col >> row;
	
	int chess[col][row];
	
	for(int i = 0; i < col ; i++){
		for(int j = 0 ; j < row ; i++){
			chess[i] = i;
			chess[j] = j;
		}
		cout << chess[i] <<"\n";
	}
	
	
	
	return 0;
}
