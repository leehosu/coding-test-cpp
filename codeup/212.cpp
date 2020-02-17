#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int array[3];
	
	for(int i = 0 ; i < 3 ; i++){
		cin >> array[i];
	}
	
	sort(array,array+3);
	
	if(array[2] < array[0] + array[1]) cout << "yes";
	else cout << "no";
	
	return 0;
}
