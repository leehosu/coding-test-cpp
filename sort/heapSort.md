# 힙정렬

---

> 힙-트리 구조를 이용하는 정렬 알고리즘

## 이진 트리

- `이진트리란?` 컴퓨터 안에서 데이터를 표현할 때 데이터를 각 노드에 담은 뒤에 노드를 두개씩 이어붙이는 구조이다.
- 즉, `모든 노드의 자식 노드가 2개 이하인 트리 구조`

#### 완전 이진 트리

- 데이터가 `루트 노드`부터 시작해서 `자식 노드`가 `왼쪽 자식 노드`, `오른쪽 자식 노드`로 **전부** 들어가는 구조의 `이진 트리`이다.
- 즉, 완전 이진 트리는 이진 트리의 노드가 중간에 비어있지 않고 빽빽히 찬 구조이다.

## 힙(Heap)

- 최솟값이나 최댓값을 빠르게 찾아내기 위해 `완전 이진 트리`를 기반으로 한 트리이다.
- `최대 힙` : `부모 노드`가 `자식 노드`보다 큰 `힙`
- 기본적으로 완전 이진 트리를 표현하는 가장 쉬운 방법은 배열에 그래도 삽입하는 것이다.
- 하지만 `힙`구조가 아닐 수도 있으니 힙정렬 알고리즘을 사용하여 힙을 만든다.

## 시간 복잡도

- `힙 정렬`의 시간 복잡도는 `O(N logN)`이다.

## Source

```c++
#include <stdio.h>
#include <iostream>

using namespace std;

int num = 9;
int heap[9] = {7,6,1,2,4,9,2,8};

int main(){
	// 전체 구조를 힙구조로 만든다.
	for(int i = 1; i<num;i++){
		int c = i;
		do{
			int root = (c-1)/2;	//특정한 원소의 부모를 가리키게 된다.
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while ( c!=0);
	}

	// 크기를 줄여가며 반복적으로 힙을 구성
	for(int i = num -1 ; i >=0 ; i--){
		// 가장 큰값을 가장 뒤에 있는 원소와 바꿔준다.
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;


		// root 원소 설정
		int root = 0;
		int c = 1;

		do{
			c = 2 * root +1;
			// 자식들 중 큰 값 찾기
			if(heap[c] < heap[c+1] && c < i-1){
				 c++; // 더 큰 값을 찾은 경우이므로 c 증가
			}
			// 루트보다 자식값이 더 크다면 교환
			if(heap[root] <heap[c] && c<i){
				// root보다 자식값이 더 크다면 위치를 바꿔준다.
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		}while( c < i);
	}

	for(int i = 0 ; i < num ; i++){
		cout << heap[i] <<"\n";
	}

	return 0;
}
```

- 중요한 아이디어는 트리의 노드를 갖고 비교를 하는 것이라는 점이다.
