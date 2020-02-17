#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int n;

long long f(){
	sort(d,d+n);
	return d[1];
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
