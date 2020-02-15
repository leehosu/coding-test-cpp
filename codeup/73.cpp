#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	int start=1;
	int sum=0;
	cin >> num;
	
	while(1){
		sum += start;
		if(sum >= num){
			cout << start;
			break;		
		}
		start++;
	}

	return 0;
}
