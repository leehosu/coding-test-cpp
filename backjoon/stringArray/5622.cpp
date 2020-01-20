#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	int array[28]={0};
	int eng_array[28] = {0};
	
	
	for(int i = 0 ; i < 28 ; i++){
		if( i == 0) array[i] = 0;
		else if( i == 1) array[i] = 1;
		else if( i >= 2 && i <= 4) array[i] = 2;
		else if( i >= 5 && i <= 7) array[i] = 3;
		else if( i >= 8 && i <= 10) array[i] = 4;
		else if( i >= 11 && i <= 13) array[i] = 5;
		else if( i >= 14 && i <= 16) array[i] = 6;
		else if( i >= 17 && i <= 20) array[i] = 7;
		else if( i >= 21 && i <= 23) array[i] = 8;
		else if( i >= 24 && i <= 27) array[i] = 9;
	}
	
	for(int i = 0 ; i < s.length() ; i++){
		int temp = s[i];
		
		if( temp == 48 ) eng_array[0]++;
		else if(temp == 49) eng_array[1]++; 
		else if( temp < 97 ) eng_array[temp-65+2]++;
		else eng_array[temp-97+2]++;
	}
	
	int sum = 0;
	
	for(int i = 0 ; i < 28 ; i++){
		if(eng_array[i]) sum += (array[i]+1)*eng_array[i] ;
	}
	
	cout << sum << "\n";
	return 0;
}
