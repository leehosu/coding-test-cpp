#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	cout << "[" << num / 10000 *10000<<"]" <<"\n";
	cout << "[" <<num % 10000 / 1000 * 1000<< "]" <<"\n";
	cout << "[" << num % 10000 % 1000 / 100 * 100<< "]" << "\n";
	cout << "[" << num % 10000 % 1000 % 100 / 10 * 10 << "]"<< "\n";
	cout << "[" << num % 10000 % 1000 % 100 % 10 << "]" << "\n";
	return 0;
}
