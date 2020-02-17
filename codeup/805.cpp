#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int a[num];
	int b[num];
	
	vector< pair <int,int> > v;
	
	for(int i = 0 ; i < num ; i++){
		cin >> a[i] >> b[i];
	}
	
	for(int i = 0 ; i < num ; i++){
		v.push_back(pair<int,int> (a[i],b[i]));
	}
	
	sort(v.begin(),v.end());
	
	for(int i = 0; i < v.size() ; i++){
		cout << v[i].first << " " << v[i].second << "\n";
	}
	
	
	return 0;
}
