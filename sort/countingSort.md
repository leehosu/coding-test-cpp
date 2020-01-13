# 계수정렬

---

> '범위 조건'이 있는 경우에 한해서 굉장히 빠른 알고리즘이다.

## 시간복잡도

- 계수 정렬의 시간 복잡도는 정해진 수만큼 반복하면 되므로 그 크기에 영향을 많이 받는 알고리즘이다.
- 크기가 `N`인 배열의 `계수 정렬` 시간 복잡도는 `O(N)`이다.

## Source

```c++
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int temp;
	int count[5]; //초기 크기 설정
	int array[30] = {
		1,1,2,3,5,4,2,2,5,4,
		2,3,1,5,4,2,3,4,1,2,
		3,4,5,1,2,5,3,1,2,4
	}; //배열의 값을 모두 알아야한다.

	for(int i = 0; i < 5 ; i++){
		count[i] = 0;
	} // 초기 상태 0으로 초기화

	for(int i = 0 ; i<30;i++){
		count[array[i]-1]++;
	} //해당 하는 숫자의 배열 1씩 증가

	for(int i = 0;i<5;i++){
		if(count[i] != 0){
			for(int j =0;j<count[i];j++){
				printf("%d", i+1);
			}
		}
	}
	return 0;
}
```
