#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	cin.get();
	
	char numList;
	
	int temp;
	int sum = 0;
	
	for( int i = 0 ; i < num ; i++){
		cin.get(numList);
		temp = numList -'0';
		sum += temp;
	}
	
	cout << sum << "\n";
	
	return 0;
}
