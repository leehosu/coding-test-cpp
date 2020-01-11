# 버블 정렬

---

> 바로 가까이에 있는( 인접해있는) 두 수를 비교하여 더 작은 값을 앞으로 보내주는 방법.

## Source

```c++
#include<stdio.h>
#include<iostream>
using namespace std;

void bubbleSort(int array[]){
	int temp;

	for(int i=0 ; i <= sizeof(array)+1 ;i++){
		for(int j = 0 ; j < (sizeof(array)+1) - i ; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	for(int i=0; i<= sizeof(array)+1;i++){
		cout<< array[i] << " " << "\n";
	}

}

int main(){
	int array[10] = {3,4,5,2,10,9,8,6,7,1};
	bubbleSort(array);
	return 0;
}
```

- `array의 전체 길이`를 둘러보다가 가장 큰 수가 마지막에 넣어지면 `전체길이 -1`만큼의 길이를 비교한다.
- `for(int j = 0 ; j < (sizeof(array)+1) - i ; j++)` 이 부분이 핵심이다.

## 시간 복잡도

- `O(N^2)`만큼의 시간이 걸린다.
- 하지만 시간복잡도는 단순히 두 숫자를 비교하여 앞으로 보내기 때문에 `선택정렬`과 같지만 실제로는 계속 비교를 해야해서 이 과정에서 컴퓨터 내부적인 연산이 굉장히 비효율적이고 수행시간이 가장 느린 안좋은 알고리즘이다.
