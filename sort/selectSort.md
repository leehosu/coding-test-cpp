# 선택 정렬

---

> 가장 작은 것을 선택해서 제일 앞으로 보내는 알고리즘

## Source

```c++
#include <stdio.h>
#include <iostream>
using namespace std;

int array[10] = {5,3,1,123,234,2,1,21,321,10}; // 배열 선언

void selectSort(int array[]){
	int min, temp, index;

	for(int i = 0 ; i <= sizeof(array)+1;i++){
		min = 9999;
		for( int j = i ; j <= sizeof(array)+1;j++){
			if(min > array[j]){
				min = array[j];
				index = j;
			}
		}
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
	}
	for(int i=0;i<10;i++){
			cout << array[i] << " " << "\n";
		}
}

int main(void){
	selectSort(array);
	return 0;
}
```

- `selectSort`함수를 보게되면 `min, temp, index`라는 변수를 선언해주는데, `min`은 최소값을 선택하여 맨앞으로 보내기 위한 변수, `temp`와 `index`는 `swap`을 하기 위한 변수이다.
- 첫번째 `for`문을 보면 배열 전체를 순회하면서 두번째 `for`문으로 배열 하나하나에 요소를 비교한다.
- `if`문을 보면 최소값을 선택하여 비교하면서 해당 인덱스를 `min`에 저장한다.
- 그 후 `swap`을 진행해준다.

## 시간복잡도

- 데이터의 갯수가 `N`개 일 때, 총 `N*(N+1)/2`번의 연산을 수행해야 한다.
- 즉, `선택정렬`의 시간 복잡도는 `O(N^2)`이다.
