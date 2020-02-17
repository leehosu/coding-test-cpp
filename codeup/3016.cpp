#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool compare(pair<string,int> a , pair<string,int> b){
	return a.second > b.second;
}

bool compare_int(int a, int b){
	return a > b;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	string name[num];
	int a[num],b[num],c[num];
	
	for(int i = 0 ; i < num ; i++){
		cin >> name[i] >> a[i] >> b[i] >> c[i];
	}
	
	vector< pair <string,int> > v;
	vector< pair <string,int> > v_2;
	vector< pair <string,int> > v_3;
	 
	for(int i = 0 ; i < num ; i++){
		v.push_back(pair<string,int> (name[i],a[i]));
		v_2.push_back(pair<string,int> (name[i],b[i]));
		v_3.push_back(pair<string,int> (name[i],c[i]));
	}
	
	sort(v.begin(),v.end(),compare);
	
	int new_b[num],new_c[num];
	
	for(int i = 0 ; i < num ; i++){
		new_b[i] = b[i];
		new_c[i] = c[i];
	}
	
	sort(new_b,new_b+num,compare_int);
	sort(new_c,new_c+num,compare_int);
	
	int tmp_2 = 0;
	int tmp_3 = 0;
	
	for(int i = 0 ; i < num ; i++){
		for(int j = 0 ; j < num ; j++){
			if( v[0].first == v_2[i].first) {
				if(v_2[i].second == new_b[j]) {
					tmp_2 = j+1;
					break;
				}
			}
		}
		for(int z = 0 ; z <num ; z++){
			if( v[0].first == v_3[i].first) {
				if(v_3[i].second == new_c[z]) {
					tmp_3 = z+1;
					break;
				}	
			}
		}
	}
	
	cout << v[0].first <<" " << tmp_2 <<" " << tmp_3;
	return 0;
}

