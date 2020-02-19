#include<iostream>
using namespace std;


char *mysubstr(char *str, int start, int count)
{
	char a[1000];
	int i;
	
	for(i = start ; i < start+count ; i++){
		a[i] = str[i];
	}
	a[i] = '\0';
	
	return &a[start];
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	char str[100];
	cin >> str;
	
	int a,b;
	cin >> a >> b;

	cout << mysubstr(str,a,b);
	return 0;
}
