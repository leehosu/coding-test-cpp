#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool compare(pair<string,int> a , pair<string,int> b){
	return a.second > b.second;
}

bool compare_1(pair<int, string> a , pair<int, string> b){
	return a.first > b.first;
} 

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int input,output;
	cin >> input >> output;
	
	string name[input];
	int score[input];
	
	for(int i = 0 ; i < input ; i++){
		cin >> name[i] >> score[i];
	}
	
	int rank[input];
	
	for(int i = 0 ; i< input ; i++){
		rank[i] = i;
	}
	
	vector< pair <string, int> > v;
	
	for(int i = 0 ; i < input ; i++){
		v.push_back( pair<string,int> (name[i],score[i]));
	}
	
	sort(v.begin(),v.end(),compare);
	
	vector< pair <int, string> > v_1;
	
	for(int i =0 ; i < input ; i++){
		v_1.push_back( pair<int,string> (rank[i],name[i]));
	}
	
	sort(v_1.begin(),v_1.end(),compare_1);
	
	int count = 0 ; 
	for(int i = 0 ; i < input ; i++){
		for(int j = 0 ; j < input ; j++){
			if(v[i].first == v_1[j].second){
				cout << v_1[j].second <<"\n";
				count++;
			}
				if(count == 2)break;
		}
		
	}
	
	
	
	
	for(int i = 0 ; i<output;i++){
		cout << v[i].first << "\n";
	}
	
	return 0;
}

