#include<iostream>
using namespace std;

void func(int num, int count){
	if(count == 0) return;
	else{
		cout << count<<"\n";
		count--;
		func(num, count);
	}
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num,count;
	cin >> num;
	
	count = num;
	
	func(num,count);
	return 0;
}
