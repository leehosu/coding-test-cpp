#include<iostream>
#include <vector>
using namespace std;

vector<pair<int,int> > top;

void hanoi(int num, int from, int tmp, int to) {
    if (num == 1) {
    	top.push_back({from,to});
	}
    else
    {
        hanoi(num- 1, from, to, tmp);
        top.push_back({from,to});
        hanoi(num - 1, tmp, from, to);
    }
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	
	int num;
	cin >> num;
	
    hanoi(num, 1, 2, 3);
    
    cout << top.size() << "\n";
    
    for(int i = 0 ; i < top.size() ; i++){
    	cout << top[i].first <<" "<< top[i].second << "\n";
	}
	return 0;
}
