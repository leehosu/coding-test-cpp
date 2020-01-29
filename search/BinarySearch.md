# 이진 탐색

## 이진 탐색이란?

- 이진 탐색 알고리즘(`Binary Search`)는 `오름차순`으로 정렬된 `배열`, `리스트`에서 특정한 값의 위치를 찾는 알고리즘이다.
- `정렬`된 리스트에서만 사용할 수 있다는 단점이 존재한다.

## 이진 탐색 알고리즘의 시간 복잡도

- `O(logN)`

## Source

```c++
bool BinarySerch(int* arr, int low, int high, int find){
  if(low > high){
    return false;
  }

int mid = (low + high) / 2;

// 찾으면 true.
if(arr[mid] == find) return true;

//찾는 값보다 크면 왼쪽으로 이동
else if(arr[mid] > find) return BinarySearch(arr,low,mid-1,find);

//찾는 값이 크면 오른쪽으로 이동
else return BinarySearch(arr,mid+1,high,find);
}

```

## BackJoon

- [1920](!http://boj.kr/990b6137d94c4d399deb31f9a7022599)
