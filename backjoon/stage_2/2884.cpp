#include<iostream>
using namespace std;

int main(){
	
	int hour, min;
	
	cin >> hour >> min;
	
	
	if(hour != 00){
		if(min >= 45 ){
			cout << hour << " " << min - 45 << "\n";
		}
		else cout << hour-1 << " " << min + 15 << "\n"; 
	}else{
		if(min >= 45 ){
			cout << hour +24 << " " << min - 45 << "\n";
		}
		else cout << hour + 23 << " " << min + 15 << "\n"; 
	}
	
	
	return 0;
}
