# Map

---

- `Map`은 `key`와 `value`의 쌍을 저장하는 집합이다.
- 배열의 일반화된 형태라고 할 수 있다.
- `key`가 어떤 형태의 값이어도 상관없고 연속된 값이 아니어도 된다.
- `map`은 `균형 잡힌 이진 탐색 트리`를 기반으로 하며, 원소에 접근하는 데 `O(log n)` 시간이 걸린다.
- `unordered_map`은 `해시`를 이용하며, 원소에 접근하는 데 평균적으로 `O(1)` 시간이 걸린다.

```c++
map<string,int> m;
m["monkey"] = 4;
m["banana"] = 3;

cout << m["banana"] << "\n";  //3
cout << m["lake"] << "\n";  //기본값 0
```

- 특정 `key`의 값을 요청 했는데 `map`에 그 `key`가 없을 경우, `key`가 자동적으로 생성되며 값은 기본값으로 설정된다

- `count()`는 `map`에 `key`가 존재하는지를 확인 하는 함수

```c++
if(m.count("lake")){
  //key 존재하면 실행
}
```

- `map`에 저장된 모든 `key`와 `value`를 출력하는 코드

```c++
for(auto x : m){
  cout << x.first << " " << x.second << \n";
}
```
