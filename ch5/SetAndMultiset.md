# set과 multiset

---

> - `set`과 `multiset`은 `균형 잡힌 이진 탐색 트리`를 기반으로 만들어져 있으며, 연산은 `O(log n)` 시간에 동작한다.
> - `unordered_set`과 `unordered_multiset`은 `해시 테이블`을 기반으로 만들어져 있으며, 연산은 `O(1)` 시간에 동작한다.

### Set

- 원소의 집합을 관리하는 자료 구조이다.
- 기본 연산은 `원소 추가`, `탐색`, `삭제`이다.

```c++
set<int> s;
s.insert(3);
s.insert(2);
s.insert(5);
cout << s.count(3) << "\n";     //1
cout << s.count(4) << "\n";     //
s.erase(3);
s.insert(4);
cout << s.count(3) << "\n";     //0
cout << s.count(4) << "\n";     //1
```

- `insert()`는 원소를 추가하는 함수
- `count()`는 원소의 개수를 반환하는 함수
- `erase()`는 원소를 삭제하는 함수

- set의 중요한 성질 중 하나는 모든 원소가 **서로 다르다.**
- 즉, `count`함수가 반환 하는 값은 무조건 `0(원소가 없는 경우)`,`1(원소가 있는 경우)` 이며, `insert`함수는 추가하려는 원소가 이미 있는 경우에는 원소를 추가하지 않는다.

```c++
cout << s.size() << "\n";   //크기 출력
for(auto x : s){
  cout << x << "\n";    //모든 원소 출력
}
```

- 위의 코드는 `set`의 크기를 출력하고 모든 원소를 출력하는 코드이다.

- `find(x)` 함수는 값이 `x`인 원소를 가리키는 반복자를 반복한다. 그러나 원소가 없는 경우에는 `end()`를 반환한다.

```c++
auto it == s.find(x);
if(it == s.end()){
  // x가 s에 없다.
}
```

##### 정렬된 집합

- `Set`은 정렬되어 있고 `unordered_set`은 그렇지 않다.
- 즉, 원소를 정렬된 상태로 저장하는 집합을 원한다면 `set`을 사용해야 한다.

```c++
set<int> s;
auto first = s.begin();
auto last = s.end(); last--;
//end()는 마지막 원소 다음을 가리키기 때문에 '--' 해줘야한다.
cout << *first << " " << *last << "\n";
```

- 원소가 정렬되어 있기 때문에 가장 작은 원소와 큰 원소를 구별 할 수 있다.

##### MultiSet

- 같은 값을 여러 개 가질 수 있는 집합이다.
- `multiset`과 `unordered_multiset` 자료 구조가 있다.(차이는 `set`과 같다.)

```c++
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
cout << s.count(5)<< "\n";  //3
```

- `erase()` : `multiset`에서 특정 값을 모두 삭제하는 함수이다.

```c++
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
s.erase(5);
cout << s.count(5)<< "\n";  //0
```

- 만약, 원소 중 **하나**만을 삭제해야 한다면 아래와 같이 한다.

```c++
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
s.erase(s.find(5));
cout << s.count(5) << "\n" ; //2
```
