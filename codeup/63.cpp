#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	switch(n){
		case 1:
		case 2:
			cout << "winter";
		break;
		case 3:
		case 4:
		case 5:
			cout << "spring";
		break;
		case 6:
		case 7:
		case 8:
			cout << "summer";
		break;
		case 9:
		case 10:
		case 11:
			cout << "fall";
		break;
		case 12:
			cout << "winter";
	}
			
	return 0;
}
