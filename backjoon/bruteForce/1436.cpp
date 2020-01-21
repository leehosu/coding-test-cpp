#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int endNum =  666;
	int num;
	cin >> num;
	int count = 1;
	
	while(1){
		if(num == count) break;
		endNum++;
		
		int saveNum = endNum;
		int flag = 0;
		
		while(saveNum){
			int temp = saveNum % 10;
			if(temp == 6) flag++;
			else if(flag<3) flag = 0;
			saveNum /= 10;
		}
		
		if(flag >= 3) count++;
	}
	cout << endNum << "\n";
	
	return 0;
}
