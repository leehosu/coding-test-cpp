#include<iostream>
#include<vector>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
	return a.first > b.first;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	vector < pair <int, int> > person(num);
	
	for(int i = 0; i < num ; i++){
		cin >> person[i].first >> person[i].second;
	}
	
	int rank[num] = {0};
	
	for(int i = 0 ; i < num ; i++){
		int count = 0 ; 
		for(int j = 0 ; j < num ; j++){
			if(person[i].first < person[j].first && person[i].second < person[j].second){
				count++;
			}
		}
		rank[i] = count + 1;
	}
	
	for(int i = 0 ; i < num ; i++){
		cout << rank[i] << " ";
	}
	
	
	return 0;
}
