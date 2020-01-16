#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b,c;
	int array[10];
	int count = 0;
	
	cin >> a >> b >> c ;
	
	int sum = a*b*c;
	
	int tmp = sum;
	
	for(int i = 0 ; i < 10 ; i++){
		array[i] = 0;
	}
	
	do{
		tmp = int(tmp/10);
		count++;
	}while(tmp>0);
	
	int digit_array[count];
	int x = 0;
	
	while(sum){
		digit_array[x++] = sum % 10;
		sum /= 10;
	}
	
	for(int i = 0 ; i < count ; i++){
		array[digit_array[i]]++;
	}
	
	for(int i = 0 ; i < 10 ; i++){
		cout << array[i] << "\n";
	}
	
	return 0;
}
