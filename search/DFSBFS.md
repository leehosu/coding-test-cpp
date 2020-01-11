# DFS와 BFS

---

## 그래프의 개념

- 정점과 간선으로 이루어진 자료구조의 일종
- `G = (V,E)`

## 그래프의 탐색

- 하나의 정점으로 시작하여 차례대로 모든 정점들을 한 번씩 방문하는 것.

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

![DFS_example](./dfs-example.png)

## 깊이 우선 탐색의 시간 복잡도

- `DFS`는 그래프(정점의 수 : N, 간선의 수 : E)의 모든 간선을 조회한다.
- 인접 리스트로 구현된 DFS : `O(N+E)`
- 인접 행렬로 구현된 DFS : `O(N^2)`

## `DFS`의 구현

1. 순환 호출 이용
2. `Stack`사용 : 명시적인 `Stack`을 사용하여 방문한 정점들을 `Stack`에 저장하였다가 다시 사용한다.

#### `재귀함수`를 이용한 `DFS` 구현

```C++
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

// dfs에 들어오면 '방문'한거로 판단
// 해당 위치에 check true로 해준다.
void dfs(int start, vector<int> graph[], bool check[]){
	check[start]= true;
	printf("%d ", start);

	for(int i=0; i < graph[start].size(); i++){
		int next = graph[start][i];
		// 방문하지 않았다면
		if(check[next]==false){
			// 재귀함수를 호출한다.
			dfs(next, graph, check);
		}
	}
}

int main (){

	int n, m, start;
	cin >> n >> m >> start;

	vector<int> graph[n+1];
	bool check [n+1];
	fill(check, check+n+1, false);

	for(int i=0; i<m; i++){
		int u,v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// Sorting은 왜 한거지?
	// 나중에 하나의 정점에서 다음을 탐색할 때 node 값에 순차적으로 접근해야하기 때문
	for(int i=1; i<=n; i++){
		sort(graph[i].begin(), graph[i].end());
	}

	//dfs
	dfs(start, graph, check);
	printf("\n");

	return 0;
}
```
