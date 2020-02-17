#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int a[num],b[num];
	
	for(int i = 0 ; i < num ; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	
	sort(a,a+num);
	
	for(int i = 0 ; i < num ; i++){
		for(int j = 0 ; j < num ; j++){
			if(a[j] == b[i]) {
			    cout << j << " ";
			    break;
			}
		}
	}
	
	return 0;
}

