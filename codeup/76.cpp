#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	for(int i = 1 ; i <= num ; i++){
		if(i%3==0) cout << "X" << " ";
		else cout << i << " ";
	}

	return 0;
}
