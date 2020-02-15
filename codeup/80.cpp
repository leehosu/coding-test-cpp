#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	int start = 1;
	int sum = 0;
	while(1){
		if(sum >= num){
			cout << sum;
			break;
		}
		sum += start;
		start++;
		
	}
	return 0;
}
