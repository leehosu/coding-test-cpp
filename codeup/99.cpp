#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int n = 10;
	int a[n][n]={0};
	
	for(int i = 0 ; i <n ; i++){
		for(int j = 0; j < n ; j++){
			cin >> a[i][j];
		}
	}
	
	int x = 1 , y=1;
	
	while(a[x][y] != 2){
		a[x][y] = 9;
		if(a[x][y+1] != 1) ++y;
		else if(a[x+1][y] != 1) ++x;
		else break;
	}
	
	a[x][y] = 9;
	
	for(int i = 0 ; i <n ; i++){
		for(int j = 0; j < n ; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	

	return 0;
}
