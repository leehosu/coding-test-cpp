#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;


int factorial(int num){
	int result = 0;
	for( int i = 1 ; i <= num ; i++){
		result += i;
	}
	
	return result;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;

	string array[num];
	
	int facNum;
	int temp[num];
		
	for(int i = 0 ; i < num ; i++ ){
		cin >> array[i];
		istringstream ss(array[i]);
		string stringBuffer;	
	    while (getline(ss, stringBuffer, 'X'))
	    {
	    	if(stringBuffer.length() !=0){
	    		facNum += factorial(stringBuffer.length());
			}
	    }
	    temp[i] = facNum;
	    facNum =0;
	}
	
	for(int i = 0 ; i < num ; i++){
		cout << temp[i] << "\n";
	}
	return 0;
}
