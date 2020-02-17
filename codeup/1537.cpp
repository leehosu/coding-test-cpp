#include <stdio.h>
#include<iostream>
using namespace std;

int n;

void f(int x){
	if(x == 1 ) cout <<"hello"<<"\n";
	else if( x == 2) cout << "world" << "\n";
	else cout << "\n";
}

int main()
{

	cin >> n;
	
	f(n);
  return 0;
}
