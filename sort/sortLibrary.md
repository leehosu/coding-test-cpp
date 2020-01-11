# c++ 라이브러리를 활용한 정렬

---

> c++에는 `<algorithm>` 라이브러리를 활용해서 정렬을 보다 쉽게 구현 할 수 있다.

## class 사용

```c++
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score){
		this->name = name;
		this->score = score;
	}

	bool operator <(Student &student){
		return this->score < student.score;
	}
};

int main(){
	Student students[] = {
	Student("이호수", 90),
	Student("유찬종", 80),
	Student("신대성", 50),
	Student("탐탐", 92)
	};

	sort(students, students+5);

	for(int i = 0 ; i<5;i++){
		cout << students[i].score << "\n";
	}

	return 0;
}
```

## vector + pair 사용

```c++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool compare(pair<int,string> a, pair<int,string> b){
	return a.first > b.first;
}
int main(){
	vector<pair <int,string> > v;

	v.push_back(pair<int,string>(90,"이호수"));
	v.push_back(pair<int,string>(80,"유찬종"));
	v.push_back(pair<int,string>(56,"윤현정"));
	v.push_back(pair<int,string>(93,"신대성"));


	sort(v.begin(), v.end(),compare);

	for(int i = 0; i< v.size() ; i++){
		cout << v[i].first << "\n";
	}

	return 0;
}
```

- c++에는 `vector`,`pair`라는 유용한 자료구조가 있다. 이를 사용해서 구조체형 변수도 쉽게 처리 할 수 있다.

## compare 함수

- 이 부분은 기본적으로 `sort`함수는 오름차순으로 정렬되는데 이 함수를 활용하여 내림차순, 원하는 순서로 정렬 할 수가 있다.

##### example

```c++
bool compare(pair<int,string> a, pair<int,string> b){
	return a.first > b.first;
}
```
