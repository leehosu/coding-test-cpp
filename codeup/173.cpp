#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int h,m;
	cin >> h >> m;
	
	if( h <= 0){
		if(m <30) {
			cout << 23 <<" "<<m+30;
		}
		else cout << h << " " << m-30;	


	}
	else{
		if(m <30) {
			cout << h-1 <<" "<<m+30;
		}
		else cout << h << " " << m-30;	
	} 
	
	return 0;
}
