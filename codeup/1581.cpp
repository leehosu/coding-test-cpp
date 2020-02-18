#include<iostream>
using namespace std;

bool arr[5000];


int selfNum(int n){
	int sum = n;
	
	while(1){
		if(n == 0) break;
		sum += n % 10;
		n = n/10;
	}
	
	return sum;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b;
	cin >> a >> b;
	
	for(int i = a ; i <= b ; i++){
		int idx = selfNum(i);

		if(idx <= b-a){
			if(b-a == 0) break;
			else arr[idx] = true;
		}
	}
	
	int sum = 0;
	
	for(int i = a ; i <= b-a ; i++){
		if(!arr[i]) {
			sum += i;
		}
	}
	
	cout << sum;
	
	return 0;
}
