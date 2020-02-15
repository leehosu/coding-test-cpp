#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int r,g,b;
	cin >> r >> g >> b;
	
	int count=0;
	
	for(int i = 0 ; i<r;i++){
		for(int j =0 ; j<g ; j++){
			for(int x = 0 ; x < b ; x++){
				cout << i << " " << j << " "<< x <<"\n";
				count++;
			}
		}
	}
	
	cout << count;
	return 0;
}
