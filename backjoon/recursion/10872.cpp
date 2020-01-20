#include<iostream>
using namespace std;


void factorial(int num){
	int fac = 1 ;
	
	for(int i = 1; i <=num  ; i++){
		fac *= i;
	}
	
	cout << fac << "\n";
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	factorial(num);
	
	return 0;
}
