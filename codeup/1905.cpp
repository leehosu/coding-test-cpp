#include<iostream>
using namespace std;
int sum;

int totalSum(int start,int n){
	if(start > n) return sum; 
	else{
		sum += start;
		totalSum(++start,n);
	}	
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int start = 1;
	cout <<	totalSum(start,n);
	return 0;
}
