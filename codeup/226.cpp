#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int answer[6];
	int myNum[6];
	int bonus;
	
	for(int i = 0 ; i < 6 ; i++){
		cin >> answer[i];
	}
	cin >> bonus;
	
	for(int i = 0 ; i < 6 ; i++){
		cin >> 
		myNum[i];
	}
	
	sort(answer,answer+6);
	sort(myNum,myNum+6);
	
	int count=0;
	
	int bonus_count=0;
	
	for(int i = 0 ; i <6;i++){
		for(int j = 0 ; j < 6; j++){
			if(answer[i] == myNum[j]) {
				count++;
				if(myNum[i] == bonus) bonus_count++;	
			} 
		}
	}
	
	if(count == 6) cout << 1;
	else if(count == 5 && bonus_count == 1) cout << 2;
	else if(count == 5) cout <<3;
	else if(count == 4) cout <<4;
	else if(count == 3) cout << 5;
	else cout << 0;
	
	
	return 0;
}
