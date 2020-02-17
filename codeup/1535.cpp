#include<iostream>
#include<algorithm>
using namespace std;

int s[110];

int f(){
	for(int i =0 ;i<n;i++){
		s[i] = d[i];
	}
	sort(s,s+n);
	
	for(int i =0 ; i < n ;i++){
		if(d[i] == s[n-1]) return i+1;
	}
	
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> d[i];
	}
	
	cout <<	f();
	
//	cout << f();
	return 0;
}
