#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int N,M,sum=0,bestNum=0;
	cin >> N >> M;
	
	int array[N];
	
	for(int i = 0 ; i < N ; i++){
		cin >> array[i];
	}
	
	for(int i = 0 ; i <= N-3 ; i++){
		for(int j = i+1 ; j <= N-2 ; j++){
			for(int k = j+1 ; k <= N-1 ; k++){
				sum = array[i] + array[j] + array[k];
				if(sum <= M){
					if(sum >= bestNum){
						bestNum = sum;
					} 
				}
			}
		}
	}	
	
	cout << bestNum << "\n";
	
	return 0;
}
