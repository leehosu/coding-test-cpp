#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int a,m,d,n;
	cin >> a>>m>>d>>n;
	
	long long sum = a;
	int count = 1;
	while(1){
		if(count == n) {
			cout << sum;
			break;	
		}
		sum = sum*m+d;
		count++;
	}
	
	return 0;
}
