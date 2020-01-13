#include <iostream>
#include <algorithm>
using namespace std; 

int num;
string a[20000];

int getSum(string a){
	int length = a.length(),sum = 0;
	
	for(int i = 0; i<length ; i++){
		if(a[i] - '0' <= 9 && a[i]-'0' >= 0){
			sum += a[i] - '0';
		}
	}
	return sum;
}

bool compare(string a, string b){
	if(a.length() < b.length()){
		return 1;
	}
	else if(a.length() >b.length()){
		return 0;	
	}
	else{
		int aSum = getSum(a);
		int bSum = getSum(b);
		
		if( aSum != bSum){
			return aSum < bSum;
		}
		else return a < b;
	}
}

int main(){
	cin >> num;
	
	for(int i = 0 ; i<num;i++){
		cin >> a[i];
	}
	
	sort(a,a+num,compare);
	
	for(int i = 0 ; i<num;i++){
		if(i>0 && a[i] == a[i-1]){
			continue;
		}
		else
		cout << a[i] << "\n";
	}
	
	return 0;
}
