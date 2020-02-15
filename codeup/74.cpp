#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int a,b;
	cin >> a >> b;
	
	for(int i = 1 ; i <= a ; i++){
		for( int j = 1 ; j <= b ; j++){
			cout << i << " " << j <<'\n';
		}
	}

	return 0;
}
