# 너비 우선 탐색(BFS)

---

> 탐색을 할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘이다.
> '최단 경로'를 찾을 때 주로 사용한다.

## BFS

- `루트 노드`(혹은 다른 임의의 노드)에서 시작해서 인접한 노드를 먼저 탐색하는 방법

  - 시작 정점에서 가장 가까운 정점을 먼저 방문하고 멀리 떨어져 있는 정점을 나중에 방문하는 순회 방법이다.
  - 즉, `깊게` 탐색하기 전에 `넓게` 탐색하는 것이다.
  - `두 노드 사이의 최단 경로` 혹은 `임의의 경로를 찾고 싶을 때` 이 방법을 사용한다.

  ## 특징

  - 직관적이지 않은 면도 있다.
  - `재귀적`으로 동작하지 않는다.
  - 그래프 탐색의 경우 어떤 노드를 방문 했었는지 `방문 여부`를 반드시 확인 해야 한다.
  - 방문한 노드들을 차례로 저장한 후 꺼낼 수 있는 자료 구조인 `큐(Queue)`를 사용한다.

## Source

```c++
#include<iostream>
#include <queue>
#include <vector>

using namespace std;

int num = 7;
int visited[7]; // 방문 여부를 담는 변수
vector<int> a[8];

void bfs(int start){
	queue<int> q; //Queue를 만들어준다.

	q.push(start);  //첫 시작(root) 노드
	visited[start] = true;  // 방문 여부 체크

	while(!q.empty()){  //비어 있을 때까지 순회
		int x = q.front();  //맨 앞을 x에 저장하고
		q.pop();  //꺼낸다.
		cout << x<< "\n"; //출력
		for(int i=0;i<a[x].size();i++){
			int y = a[x][i];  // 인접 노드들을 y에 저장
			if(!visited[y]){  //방문하지않았다면
				q.push(y);  //넣어주고
				visited[y] = true;  //방문여부 체크
			}
		}
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

	bfs(1);
	return 0;
}
```
