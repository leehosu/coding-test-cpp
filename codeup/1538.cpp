#include <stdio.h>
#include<iostream>
using namespace std;

int n;

void f(int x){
	x%2==0 ? cout << "even"; : cout << "odd";
}

int main()
{

	cin >> n;
	
	f(n);
  return 0;
}
