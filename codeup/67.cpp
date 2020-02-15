#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	while(1){
		cout << num<<"\n";
		if(num==1) break;
		num--;
	}

	return 0;
}
