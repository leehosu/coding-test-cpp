# 깊이 우선 탐색 (DFS)

---

> 맹목적으로 각 노드들을 탐색 할 때에 주로 사용되며 재귀함수 , stack을 이용하여 구현한다.

## 깊이 우선 탐색 (`DFS`)

- `Root node`(혹은 `다른 임의의 노드`)에서 시작하여 다음 분기(`branch`)로 넘어가기 전에 해당하는 분기를 완벽하게 탐색하는 방법.

  1. 미로를 탐색할 때 한 방향으로 갈 수 있을 때까지 계속 가다가 더 이상 갈 수 없게 되면 다시 가장 가까운 갈림길로 돌아와서 이곳으로부터 다른 방향으로 다시 탐색을 진행하는 방법.

  2. 넓게(`wide`) 탐색하기 전에 깊게(`deep`) 탐색함.

  3. 깊이 우선 탐색(`dfs`)이 너비 우선 탐색 (`bfs`)보다 간단함.
  4. 검색 속도 자체는 너비 우선 탐색(`bfs`)가 빠름.

## 깊이 우선 탐색(`DFS`)의 특징

- 자기 자신을 호출하는 순환 알고리즘의 형태
- 이 알고리즘을 구현할 때의 특징은 그래프의 탐색인 경우 어떤 노드에 `방문 여부`를 반드시 검사해야함.
  (이를 하지 않을 경우 무한루프에 빠질 수도 있음)

## Source

```c++
#include<iostream>
#include <vector>

using namespace std;

int num = 7;
int visited[7];
vector<int> a[8];

void dfs(int x){
	if(visited[x]) return;

	visited[x] =  true;

	cout << x << "\n";

	for(int i = 0 ; i < a[x].size() ; i++){
		int y = a[x][i];
		dfs(y);
	}
}

int main(){

		a[1].push_back(2);
	a[2].push_back(1);

	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);

	a[2].push_back(4);
	a[4].push_back(2);

	a[2].push_back(5);
	a[5].push_back(2);

	a[4].push_back(5);
	a[5].push_back(4);

	a[3].push_back(6);
	a[6].push_back(3);

	a[6].push_back(7);
	a[7].push_back(6);

	dfs(1);

	return 0;
}
```
