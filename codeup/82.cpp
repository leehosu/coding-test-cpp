#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int a,d,n;
	cin >> a>>d>>n;
	
	int sum = a;
	int count =1;
	while(1){
		if(count == n) {
			cout << sum;
			break;	
		}
		sum += d;
		count++;
	}
	
	return 0;
}
