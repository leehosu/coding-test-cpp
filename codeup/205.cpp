#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	int a,b;
	cin >> a >> b;
	
	double array[10];
	
	array[0] = a+b;
	array[1] = b+a;
	array[2] = a-b;
	array[3] = b-a;
	array[4] = a*b;
	array[5] = b*a;
	array[6] = a/b;
	array[7] = b/a;
	array[8] = pow(a,b);
	array[9] = pow(b,a);
	 
	sort(array,array+10);
	
	cout<<fixed;
	cout.precision(6);
	cout << array[9]; 
	
	return 0;
}
