#include <stdio.h>
#include<iostream>
using namespace std;

int n;

void f(int x){
	int i = 2, j = x-1;
	
	while(1){
		if(i <= j){
			if(x % i == 0){
				cout << "composite";
				break;
			}else{
				i++;
			}
		}
		else{
			cout << "prime";
			break;
		}
	}
}

int main()
{

	cin >> n;
	
	f(n);
  return 0;
}
