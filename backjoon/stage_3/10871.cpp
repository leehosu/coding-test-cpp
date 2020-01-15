#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int N,X;
	
	cin >> N >> X;
	
	int array[N];
	
	for(int i=0;i<N; i++){
		cin >> array[i];
	}
	
	for( int i=0;i<N;i++){
		if(array[i]<X){
			cout << array[i] <<" ";
		}
	}
	
	
	return 0;
}
