#include<iostream>
#include<algorithm>
using namespace std;

int Mylower_bound(int* arr, int length, int find){
	int start = 0;
	int end = length;
	int mid = length;
	
	while(end-start > 0){
		mid = (start+end)/2;
		
		if(arr[mid] < find){
			start = mid + 1;
		}
		else end = mid;
	}
	return end + 1;
}

int Myupper_bound(int * arr, int length, int find){
	int start = 0;
	int end = length;
	int mid;
	
	while(end - start > 0 ){
		mid = (start+end)/2;
		
		if(arr[mid] <= find){
			start = mid +1;
		}
		else end = mid;
	}
	
	return end + 1;
}


int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int first[N];
	
	for(int i = 0 ; i < N ; i++){
		cin >> first[i];
	}
	
	int M;
	cin >> M;
	
	int second[M];
	
	for(int i = 0 ; i< M ;i++){
		cin >> second[i];
	}
	
	sort(first,first+N);
	
	for(int i = 0 ; i < M ; i++){
		cout << Myupper_bound(first,N,second[i]) - Mylower_bound(first,N,second[i]) << " ";
	}
	
	
	return 0;
}
