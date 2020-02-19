#include<iostream>
using namespace std;

void odd(int start, int end){

	if(start % 2 != 0) {
		cout << start++ <<" ";
	}
	if(start < end){
		return odd(++start,end);
	}
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b;
	cin >> a >> b;
	
	odd(a,b);
	
	return 0;
}
