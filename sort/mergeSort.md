# 병합 정렬

---

> 하나의 큰 문제를 두 개의 작은 문제로 분할한 뒤에 각자 계산하고 나중에 합치는 방법이다.

## Key Point

- 합치는 순간 `정렬`을 한다.
- 정렬 배열은 반드시 전역에 선언되어야 한다.
  -> _메모리 활용이 비효율적이다._

## Source

```c++
#include <stdio.h>
#include <iostream>
using namespace std;

int num = 8;
int sorted[8];

void merge(int a[], int m, int middle, int n){
	int i = m;
	int j = middle +1;
	int k = m;

	while(i <= middle && j <= n){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		}
		else{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	if(i>middle){
		for(int t = j ; t <= n ; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	else{
		for(int t = i; t <= middle ; t++){
			sorted[k] = a[t];
			k++;
		}
	}

	for(int t = m ; t <= n ; t++){
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n){
	if(m<n){
		int middle  = (m+n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle+1,n);
		merge(a,m,middle,n);
	}
}

int main(){
	int array[num] = {8,7,4,2,1,3,4,6};

	mergeSort(array,0,num-1);

	for(int i = 0 ; i<num ; i++){
		cout << array[i] << "\n";
	}

	return 0;
}
```
