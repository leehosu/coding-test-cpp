#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	long long w,h,b;
	cin >> w >> h >> b;
	
	cout<<fixed;
	cout.precision(2);
	cout << float((w*h*b))/8/1024/1024 << " "<<"MB";
	return 0;
}
