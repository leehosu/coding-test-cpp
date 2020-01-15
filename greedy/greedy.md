# Greedy 알고리즘

---

> 항상 최적의 결과를 도출하는 것은 아니지만 최적의 값을 구할 수 있는 것이 장점이다.

## Example

- 예를 들어 동전을 선택하는 문제가 있다.
- 1260원을 거슬러줘야할 때 가장 적은 숫자의 화폐를 이용해 거슬러주는 경우는?

```c++
#include <iostream>

using namespace std;

int main(){
	int n, result = 0;
	cin >> n;

	result += n / 500;
	n %= 500;

	result += n / 100;
	n %= 100;

	result += n / 50;
	n %= 50;

	result += n / 10;

	cout << result << "\n";
	return 0;
}
```

- 즉, `Greedy` 기법은 가장 최적의 조건을 먼저 선택하는 기법입니다.
