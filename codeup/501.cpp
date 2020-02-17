#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b){
	return a > b;
}

int num = 7;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int array[num];
	vector<int> v;
	
	for(int i = 0 ; i <num ; i++){
		cin >> array[i];
		v.push_back(array[i]);
	}
	
	sort(v.begin(),v.end(),compare);
	
	for(int i = 0 ; i < 2 ; i++){
		cout << v[i] <<"\n";
	}
	
	
	
	return 0;
}
