#include<iostream>
#include<string>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;	
		
	int count = 0;
	
	for(int i = 0 ; i < s.length() ; i++){	
		if(s[i] == 'c'){
			if(s[i+1] == '=' ) i++;
			else if(s[i+1] = '-' ) i++;
		}	
		else if(s[i]=='d'){
			if(s[i+1]=='z'){
				if(s[i+2]=='='){
					i++;
					i++;	
				} 
			}else if(s[i+1]=='-') i++;
		}
		else if(s[i]=='l'){
			if(s[i+1]=='j') i++;
		}
		else if(s[i]=='n'){
			if(s[i+1]=='j') i++;
		}
		else if(s[i]=='s'){
			if(s[i+1]=='=') i++;
		}
		else if(s[i]=='z'){
			if(s[i+1] == '=') i++;
		}
		count++;
	}
		
	
	cout << count << "\n";
	
	return 0;
}
