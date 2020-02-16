#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	vector<char> a;
	vector<char> b;
	vector<char> c;
	
	string str_1,str_2,str_3;
	
	cin >> str_1 >> str_2 >> str_3;
	
	for(int i = 0 ; i < str_1.length() ; i++){
		a.push_back(str_1[i]);
	}
	for(int i = 0 ; i < str_2.length() ; i++){
		b.push_back(str_2[i]);
	}
	for(int i = 0 ; i < str_3.length() ; i++){
		c.push_back(str_3[i]);
	}
		
	if(a.back() == b.front()){
		if(b.back() == c.front()){
			if(c.back() == a.front()) cout << "good";
			else cout << "bad";
		}
		else cout << "bad";
	}
	else cout << "bad";


	return 0;
}
