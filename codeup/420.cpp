#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<string,int> a, pair<string,int> b){
	return a.second > b.second;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	string str[num];
	int score[num];
	
	for(int i = 0 ; i < num ; i++){
		cin >> str[i] >> score[i];
	}

	vector<pair <string,int> > v;
	
	for(int i=0;i<num;i++){
		v.push_back(pair<string,int> (str[i],score[i]));
	}
	
	sort(v.begin(),v.end(),compare);
	
	cout << v[2].first;

	return 0;
}
