#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 


bool compare(pair<int,string> a, pair<int,string> b){
	return a.first > b.first;
}
int main(){
	vector<pair <int,string> > v;
	
	v.push_back(pair<int,string>(90,"��ȣ��"));
	v.push_back(pair<int,string>(80,"������"));
	v.push_back(pair<int,string>(56,"������"));
	v.push_back(pair<int,string>(93,"�Ŵ뼺"));
	
	
	sort(v.begin(), v.end(),compare);
	
	for(int i = 0; i< v.size() ; i++){
		cout << v[i].first << "\n";
	} 
	
	return 0;
}
