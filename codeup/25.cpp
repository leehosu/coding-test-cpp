#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int y,m,d;
	char c1,c2;
	
	cin >> y >> c1 >> m >> c2 >> d;
	printf("%02d-%02d-%04d",d,m,y);
	
	return 0;
}
