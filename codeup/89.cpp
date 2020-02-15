#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	int x,y;
	int array[20][20]={0};
	
	cin >> num;
	
	for(int i = 1 ; i <= num ; i++){
		cin >> x >> y;
		array[x][y] = 1;
	}
	
	
	for(int j = 1 ; j <= 19;j++){
		for(int z = 1 ; z <=19;z++){
			cout << array[j][z]<<" "; 
		}
		cout << "\n";
	}
	return 0;
}
