# 정렬을 이용한 문제 풀이

---

- `O(n^2)` 시간에 쉽게 풀 수 있는 문제에 대한 `O(n)` 이나 `O(n log n)` 시간 알고리즘을 찾아내는 문제가 나올 수도 있다.

- 예를들어, 배열의 모든 원소가 유일한지 검사하려고 한다.

1. O(n&2)

```cpp
bool ok = true;
for(int i = 0 ; i < n ; i++){
  for(int j = i + 1 ; j < n ; j++){
    if(array[i] == array[j]) ok = false;
  }
}
//O(n^2)
```

2. O(n)

```cpp
bool ok = true;
sort(array,array+n);
for(int i = 0 ; i < n - 1 ; i++){
  if(array[i] == array[i+1]) ok = false;
}
// O(n)
```
