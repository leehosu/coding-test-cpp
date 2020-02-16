#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int array[3];
	int h = 170;
	int count = 0;
	
	for(int i = 0 ; i < 3 ; i++){
		cin >> array[i];
		if(array[i] <= 170){
			cout << "CRASH" <<" " << array[i];
			break;
		} 
		else count++;
	}
	
	if(count ==3) cout << "PASS";
	
	
	
	
	return 0;
}
