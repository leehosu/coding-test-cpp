#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	int x,y;
	int array[20][20]={0};
	
	for(int i = 1 ; i <= 19 ; i++){
		for(int j = 1 ; j <=19 ; j++){
			cin >> array[i][j]; 
		}
	}
	
	cin >> num;
	
	for(int i = 1 ; i <=num ; i++){
		cin >> x >> y;
		for(int j = 1 ; j <= 19 ; j++){
			if(array[x][j]==0) array[x][j] = 1;
			else array[x][j] = 0;
		}
		for(int z = 1; z <=19 ; z++){
			if(array[z][y] == 0) array[z][y] = 1;
			else array[z][y] = 0;
		}
	}
	
	for(int i = 1 ; i <= 19 ;i++){
		for(int j =1 ; j <= 19 ; j++){
			cout << array[i][j] <<" ";
		}
		cout << "\n";
	}
	return 0;
}
