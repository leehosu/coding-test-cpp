#include<iostream>
using namespace std;
int n,a,b,d[1010];

int subsetsum(int a, int b){
	int sum = 0;
	for(int i = a ; i <=b ; i++){
		sum += d[i];
	}
	
	return sum;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	cin >> n;
	for(int i = 1; i <= n ; i++){
		cin >> d[i];
	}
	
	cin >> a >> b;
	
	cout << subsetsum(a,b);
	
	return 0;
}
