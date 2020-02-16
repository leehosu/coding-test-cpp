#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;
	
	int count_1 = 0 ;
	int count_2 = 0;
	
	for(int i = 0 ; i < str.length() ; i++){
		if(str[i] =='c' || str[i] =='C')count_1++;
	}
	for(int i = 0 ; i < str.length() ; i++){
		if(str[i] =='c'){
			if(str[i+1] =='C') count_2++;
			else if(str[i+1] =='c') count_2++;
		}
		else if(str[i] == 'C'){
			if(str[i+1] =='C') count_2++;
			else if(str[i+1] == 'c') count_2++;
		}
	}
	cout << count_1<<"\n";
	cout << count_2;
	
}
