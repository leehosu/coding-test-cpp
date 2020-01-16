#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int i = 0 ;
	int num;
	cin >> num;
	
	int score[num];
	int asc_score[num];
	double new_score[num];
	double sum;
	double avg;
	
	for(i = 0 ; i < num ; i++){
		cin >> score[i];
		asc_score[i] = score[i];
	}
	
	sort(asc_score,asc_score+num);
	
	for(i=0;i<num;i++){
		new_score[i] = (double)score[i] / (double)asc_score[num-1] * 100;
		sum += new_score[i];
	}
	
	avg = sum / (double)num;
	
	cout.precision(4);
	cout << avg << "\n";
	
	return 0;
}
