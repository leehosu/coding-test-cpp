#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;
	
	int array_1[num];
	int count,sum;
	double avg;
	double final[num];
	
	for(int i = 0 ; i < num ; i++){	
		cin >> array_1[i];
		if(array_1[i] <1 || array_1[i]>1000) return 0;
		
		int array_2[array_1[i]];

		for( int j = 0 ; j < array_1[i] ; j++){	
			cin >> array_2[j];
			if(array_2[j] < 0 || array_2[j] >100) return 0;
			sum += array_2[j];
		}
			
		avg = (double) sum / array_1[i];
		
		for(int j=0 ; j < array_1[i] ; j++){
			if(array_2[j] > avg){
				count ++;
			}
		}
		
		final[i] = (double)count / (double)array_1[i] * (double)100 ;
		sum=0;
		avg =0;
		count =0;
	}	
	
	for(int i = 0 ; i <num ; i++){
		cout.precision(3);
		cout<<fixed;
		cout << final[i] <<"%" <<"\n";
	}
	return 0;
}
