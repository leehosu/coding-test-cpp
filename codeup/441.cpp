#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b){
	return a > b;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	
	int num;
	cin >> num;
	
	int array[num];
	vector<int> v;
	
	for(int i = 0 ; i < num ; i++){
		cin >> array[i];
		v.push_back(array[i]);
	}
	
	sort(v.begin(),v.end(),compare);
	
	for(int i = 0 ; i< v.size() ; i++){
		cout << v[i] <<" ";
	}
	
	
	
	return 0;
}
