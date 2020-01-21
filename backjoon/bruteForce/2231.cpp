#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	
	int num;
	cin >> num;
	
	int sum,temp;
	
	for(int i  = 0 ; i < num ; i++){
		sum = i;
		temp = i;
		
		while(temp){
			sum += temp % 10;
			temp /= 10;
		}
		
		if(num == sum) {
			cout << i << "\n";
			return 0;
		}
	}
	
	cout << 0 << "\n";
	return 0;
}
