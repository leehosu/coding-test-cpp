#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num,start=1;
	cin >> num;
	
	int sum=0;
	do{
		if(start%2==0){
			sum += start; 	
		}
		start++; 
	}while(start <= num);
	
	cout << sum;
	return 0;
}
