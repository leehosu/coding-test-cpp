#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num, start=0;
	cin >> num;
	do{
		cout << start << "\n";
		start++;
	}while(start <= num);
	
	return 0;
}
