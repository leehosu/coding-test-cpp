# 삽입 정렬

---

> 각 숫자를 적절한 위치에 삽입하는 방법. 즉, 필요할 때만 위치를 교환한다.

## Source

```c++
#include <stdio.h>
#include <iostream>
using namespace std;

void insertSort(int array[]){
	int temp;
	for(int i = 0 ; i < sizeof(array)+1 ; i++){
		while(array[i] > array[i+1]){
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
			i--;
		}
	}
	for(int i=0;i<= sizeof(array)+1 ; i++){
		cout << array[i] << "\n";
	}
}

int main(){
	int array[10] = {1,5,10,9,6,8,2,4,5,7};
	insertSort(array);
	return 0;
}
```

- 해당 숫자를 적절한 위치에 삽입을 하기 때문에 선택한 숫자보다 작을 경우 `swap` 과정을 안해도 된다.
- 전체 배열을 순회하면서 `i`번째 인덱스의 값과 `i+1`번째 인덱스의 값을 비교해서 `i`번째 인덱스의 값이 크다면 `i+1`번째 인덱스의 값과 바꿔준다.

## 시간 복잡도

- `삽입정렬`은 기본적으로 앞의 값들이 정렬되어있다고 가정을 하기 때문에 특정한 경우에 따라 굉장한 속도를 갖고 있다.
- 하지만 반복문을 2번 사용하기 때문에 시간 복잡도는 `O(N^2)`이다.
- **거의 정렬된 상태에 한해서는 어떤 알고리즘보다 빠르다.**
