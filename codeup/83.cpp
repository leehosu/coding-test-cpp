#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int a,r,n;
	cin >> a>>r>>n;
	
	long long sum = a;
	int count = 1;
	while(1){
		if(count == n) {
			cout << sum;
			break;	
		}
		sum *= r;
		count++;
	}
	
	return 0;
}
