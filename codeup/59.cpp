#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num = 3;	
	long long array[num];
	
	for(int i = 0 ; i < num ; i++){
		cin >> array[i];
		if(array[i]%2==0) cout << "even" << "\n";
		else cout << "odd" << "\n";	
	}
		
	return 0;
}
