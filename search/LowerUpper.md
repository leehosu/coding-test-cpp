# Lower bound & Upper_bound

---

> 이 문제는 정렬된 배열/리스트 구해야 할 정수n 을 Upper bound(n) - Lower bound(n) 을 하게되면 배열에 같은 숫자 카드를 몇개 가지고 있는지에 관한 문제를 풀때 사용된다.

## Lower_Bound란?

- `이진 탐색` 기반의 알고리즘이다.
- 즉, `정렬`되어 있어야한다.
- 찾으려는 `index`값이 없으면 `index`값보다 큰 가장 작은 정수 값을 찾는다.

## Source

```c++

int lower_bound(int* arr, int lengh, int find){
  int start = 0;
  int end = length;
  int mid = length;

  while(end - start > 0){
    mid = (start+end) / 2;

    if(arr[mid] < find){
      start = mid + 1 ;
    }
    else end = mid;
  }

  return end+1;
}

```

## Upper_bound란?

- `이진 탐색 기반`의 알고리즘이다.
- 즉, `정렬`되어 있어야 한다.
- `upper_bound`는 `index`값을 초과하는 가장 첫번째 원소의 위치를 구한다.

## Source

```c++

int upper_bound(int* arr, int length, int find){
  int start = 0 ;
  int end = length;
  int mid;

  while(end - start > 0){
    mid = (start + end) / 2;
    if(arr[mid] <= find){
      start = mid +1;
    }else end = mid;
  }

  return end+1;
}

```

## BackJoon

- [10816](http://boj.kr/689ce5f3c4554f9ca3e70fa2f0ce9c54)
