#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int array[num];
	
	for(int i = 1 ; i <= num-1 ; i++){
		cin >> array[i];
	}
	
	sort(array,array+num);

	for(int i = 1 ; i <= num-1 ; i++){
		if( i != array[i]) {
			cout << i ;
			break;
		}
	}
	
	return 0;
}
