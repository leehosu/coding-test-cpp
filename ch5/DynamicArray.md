# 동적 배열

---

- C++에서 일반적인 배열은 크기가 고정되어 있고, 한 번 생성한 배열의 크기를 바꾸는 것은 불가능하다.

```
int array[n];
```

- `동적배열(Dynamic array)`은 프로그램이 실행되는 동안 크기가 변할 수 있는 배열이다.

### Vector

- `Vector`는 원소를 마지막에 추가하거나 삭제하는 과정을 효율적으로 할 수 있는 동적 배열이다.

```c++
vector<int> v;
v.push_back(3); //[3]
v.push_back(2); //[2]
v.push_back(5); //[5]

cout << v[0] << "\n";   //3
cout << v[1] << "\n";   //2
cout << v[2] << "\n";   //5
```

- `vector`를 생성하는 다른 방법으로는 원소의 목록을 나열하는 방법이다.

```c++
vector<int> v = {2,4,5,1,3};
```

- 원소의 개수와 초기값을 주는 것도 가능하다.

```c++
vector<int> a(8); //크기 8, 초기값 0
vector<int> b(8,5); //크기 8, 초기값 5
```

- `size()` : `vector`안의 원소 개수를 반환하는 함수.

```c++
for(int i=0 ; i<v.size() ; v++){
  cout << v[i] << "\n";
}

or

for(auto a : v){
  cout << x << "\n";
}
```

- `back()` : `vector`의 마지막 원소를 반환.
- `pop_back()` : 마지막 원소를 삭제

```c++
vector<int> v = {2,4,2,5,1};
cout << v.back(); << "\n";  //1
v.pop_back();
cout << v.back(); << "\n";   //5
```

### 반복자와 범위

- `반복자(Iterator)`는 자료 구조의 원소를 가리키는 변수이다.
- `begin()` 반복자는 자료구조의 첫 번째 원소를 가리키고 `end()`반복자는 마지막 원소 다음을 가리킨다.

```
[ 5, 2, 3, 1, 5, 7, 8 ]
  ↑                   ↑
v.begin()           v.end()
```

- **`begin()`은 자료 구조의 원소를 가리키지만 `end()`는 자료구조 바깥을 가리킨다.**

- `범위(Range)`는 자료 구조의 연속된 원소를 의미한다.
- 예를 들어 반복자 `begin()` 부터 반복자 `end()`까지의 범위는 자료 구조의 모든 원소를 포함한다.

```c++
sort(v.begin(), v.end());             //정렬
reverse(v.begin(), v.end());          //역순
random_shuffle(v.begin(), v.end());   //순서 뒤섞음
```

- 반복자가 가리키는 원소는 `*`를 이용하여 접근할 수 있다.

```c++
cout << *v.begin() << "\n";
```

- 아래의 코드는 정렬되어 있으며 중복 원소가 삭제된 `vector`이다.

```c++
sort(v.begin(), v.end());
v.erase(unique(v.begin(),v.end()),v.end()); // 중복 삭제
```

### 다른 자료 구조

1. `Deque`

- 양쪽 끝 원소를 효율적으로 처리할 수 있는 동적배열이다.
- `push_back()`, `pop_back()`, `push_front()`, `pop_front()` 함수가 있다.

```c++
deque<int> d;
d.push_back(5);   //[5]
d.push_back(2);   //[5,2]
d.push_front(3);  //[3,5,2]
d.pop_back();     //[3,5]
d.pop_front();    //[5]
```

- **`Deque`은 `Vector`보다 실행 시간의 상수항이 크며, 배열의 양쪽 끝 모두에서 원소를 추가하거나 삭제할 필요가 있을 때만 사용하는 것이 좋다.**

2. `Stack`

- 끝에서 원소를 넣고 빼는 `push()`, `pop()` 함수가 있고, 마지막 원소를 반환하는 `top()`함수가 있는 자료 구조이다.

```c++
stack<int> s;
s.push(2);
s.push(5);
cout<< s.top() << "\n";   //5
s.pop();
cout<< s.top() << "\n";   //2
```

3. `Queue`

- 원소가 마지막에 추가되며 앞에서부터 삭제된다.
- 마지막에 추가되는 `push()`함수와 앞에서부터 삭제되는,`pop()` 함수가 있고 첫 번째 원소와 마지막 원소를 반환하는 `front()`, `back()` 함수가 있다.

```c++
queue<int> q;
q.push(2);  //[2]
q.push(5);  //[2,5]
cout<< q.front() << "\n"; //2
q.pop();  //[5]
cout<< s.back() << "\n";  //5
```
