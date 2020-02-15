#include<iostream>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int h , w , n , l , x, y;
	bool d;
	int a[101][101] = {0};
	
	cin >> h >> w;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++){
		cin >> l >> d >> x >> y;
		if(l == 1) {
			if(a[x][y] == 0) a[x][y] = 1;
		}
		if(l != 1){
			if(d == 0){
				for(int j = 1 ; j <= l ; j++){
					a[x][y+j-1] = 1;
				}
			}
			else if(d ==1){
				for(int j = 1 ; j <=l ; j++){
					a[x+j-1][y] = 1;
				}
			}
		}
		
	}
	
	for(int i = 1 ; i <= h;i++){
		for(int j = 1 ; j<=w ; j++){
			cout << a[i][j]<<" ";
		}
		cout << "\n";
	}
	return 0;
}
