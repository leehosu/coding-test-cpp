#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int n = 3;
	
	long long array[n];
	
	for(int i = 0 ; i < n ; i++){
		cin >> array[i];
	}
	
	sort(array,array+n);
	cout << array[0];
	
	return 0;
}
