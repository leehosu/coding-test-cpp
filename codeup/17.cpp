#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int y,m,d;
	char c;
	cin >> y >> c >>m >> c >>d;
	printf("%04d.%02d.%02d",y,m,d);
	return 0;
}
