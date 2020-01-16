#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int array[10];
	int remain_array[10];
	int count = 0;
	
	for(int i = 0 ; i < 10 ; i++){
		cin >> array[i];
		remain_array[i] = array[i] % 42;
	}
	
	sort(remain_array,remain_array+10);
	
	for(int i = 0 ; i < 10 ; i++){
		if(remain_array[i] != remain_array[i+1]){
			count++;
		}
	}
	
	cout << count << "\n";
	return 0;
}
