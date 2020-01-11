# 퀵 정렬

---

> 퀵정렬은 대표적인 '분할 정복' 알고리즘으로 특정한 값을 기준으로 큰 숫자와 작은 숫자를 서로 교환한 뒤에 배열을 반으로 나눠서 비교하는 정렬 알고리즘이다.

## Key Point

- `quick sort`의 key point는 `pivot`이라고 하는 중간 값이다.
- 이 `pivot`을 기준으로 큰 값과 작은 값을 구분하여 정렬한다.
- 보통 `pivot` 값은 가장 앞에 있는 값으로 설정한다.
- 배열의 왼쪽(`start`)에서 `pivot`보다 큰 값을 선택하고, 배열의 오른쪽(`end`)에서는 `pivot`보다 작은 값을 선택한다.
- 그리고 그 두개의 값을 `swap` 해준다.
- 그러던 중 `큰 값의 index`보다 `작은 값의 index`가 더 크다면 즉, `엇갈린다면` 더 작은 값과 `pivot`의 자리를 `swap`해준다.
- 그렇게 되면 왼쪽은 `pivot`보다 작고 오른쪽은 `pivot`보다 크다.
- 계속 `재귀적`으로 이러한 작업을 반복해준다.

## Source

```c++
#include <stdio.h>
#include <iostream>
using namespace std;

int num = 10;
int array[10] = {1,5,10,9,6,8,2,4,5,7};

void quickSort(int *array, int start, int end){
	if(start >= end){	//원소가 1개
		return ;
	}

	int pivot = start;  //처음 index를 pivot으로 설정
	int i = start +1; //왼쪽 시작
	int j = end;      //오른쪽 시작
	int temp;         //swap을 위해 선언

	while(i<=j){	//엇갈릴때 까지
		while(array[i] <= array[pivot]){
			i++;
		} //pivot 값보다 큰 값을 만날때까지 -> 이동
		while(array[j] >= array[pivot] && j > start){
			j--;
		}//pivot값보다 작은 값을 만날때까지 <- 이동 && 최대한 커봤자 start 까지 이동.

		if(i > j){	//현재 엇갈린 상태면 교체
			temp = array[j];
			array[j] = array[pivot];
			array[pivot] = temp;
		}
		else {	//엇갈리지 않았다면
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}

	}
	quickSort(array, start, j-1);
	quickSort(array, j+1, end);
}

int main(){
	quickSort(array,0,num-1);
	for(int x = 0 ; x < num ; x++){
		cout << array[x] << "\n";
	}
	return 0;
}
```

## 시간 복잡도

- `pivot` 값보다 작은 값을 만날 때까지 반복문을 처리한다.
- 기본적으로 N번씩 탐색하되 반으로 쪼개진다는 점에서 log N을 곱한 시간 복잡도를 가진다.
- 평균 시간 복잡도는 `O(N*logN)`이다.
- 최악 시간 복잡도는 `O(N^2)`이다.

## Bonus

- 만약 내림차순으로 정려하고 싶다면?

```c++
	while(i<=j){	//엇갈릴때 까지
		while(array[i] >= array[pivot]){	//pivot 값보다 큰 값을 만날때까지 -> 이동
			i++;
		}
		while(array[j] <= array[pivot] && j > start){		//pivot값보다 작은 값을 만날때까지 <- 이동 &&
			j--;
		}

		if(i > j){	//엇갈린 상태면 교체
			temp = array[j];
			array[j] = array[pivot];
			array[pivot] = temp;
		}
		else {	//엇갈리지 않았다면
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
```

- 오른차순으로 정렬했던 코드에서 `while`의 범위만 바꿔주면 쉽게 내림차순으로 정렬이 가능하다.
