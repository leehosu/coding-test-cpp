#include<iostream>
using namespace std;

int fibo(int num){
  if(num == 0) return 0;
  else if(num == 1) return 1;
  else return fibo(num-1) + fibo(num-2);
}

int main(void){
	int num;
	cin >> num;
	if(num > 20 || num <0) return 0;
	cout << fibo(num) << "\n";
		
  return 0;
}
