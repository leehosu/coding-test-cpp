#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	double h, m;
	
	cin >> h >> m;
	
	double avg_m = (h-100) * 0.9;
	double bmi = (m - avg_m) * 100 / avg_m ;
	if(bmi <= 10) cout << "정상";
	else if(bmi > 10 && bmi <= 20 ) cout <<"과체중";
	else cout << "비만"; 
	
	return 0;
}
