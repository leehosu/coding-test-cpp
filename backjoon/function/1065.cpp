#include<iostream>
using namespace std;

bool sequence(int num){
	if(num < 100) return true;
	
	int array[3];
	
	array[0] = num / 100;
	array[1] = num * 100 /10;
	array[2] = num % 10;
	
	if((array[0]-array[1]) == (array[1]-array[2])){
		return true;
	}
	return false;
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	if (num <= 0 || num > 1000)
		return -1;
	int count=0;
	
	for(int i = 1; i <= num ; i++){
		if(sequence(i)) count++;
	}
	
	cout << count << "\n";
	
	return 0;
}
