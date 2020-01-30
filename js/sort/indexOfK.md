# K번째 수

---

> 이 문제는 Programers에 수록되어 있다.

## Problem

- 배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, k번째에 있는 수를 구하려 합니다.

- 예를 들어 array가 [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3이라면
- array의 2번째부터 5번째까지 자르면 [5, 2, 6, 3]입니다.
- 1에서 나온 배열을 정렬하면 [2, 3, 5, 6]입니다.
- 2에서 나온 배열의 3번째 숫자는 5입니다.
- 배열 array, [i, j, k]를 원소로 가진 2차원 배열 commands가 매개변수로 주어질 때, commands의 모든 원소에 대해 앞서 설명한 연산을 적용했을 때 나온 결과를 배열에 담아 return 하도록 solution 함수를 작성해주세요.

## 제한 사항

- array의 길이는 1 이상 100 이하입니다.
- array의 각 원소는 1 이상 100 이하입니다.
- commands의 길이는 1 이상 50 이하입니다.
- commands의 각 원소는 길이가 3입니다.

## 입/출력 예시

| array                 |             commands              |    return |
| --------------------- | :-------------------------------: | --------: |
| [1, 5, 2, 6, 3, 7, 4] | [[2, 5, 3], [4, 4, 1], [1, 7, 3]] | [5, 6, 3] |

## Source

```js
function solution(array, commands) {
  var answer = [];
  var temp = [];
  commands.map((element, i) => {
    temp = array.slice(element[0] - 1, element[1]).sort((a, b) => a - b);
    answer[i] = temp[element[2] - 1];
  });

  return answer;
}
```

## 설명

- temp라는 임시 배열을 하나 만든다.
- array의 map 메소드를 이용하여 `commands` 배열의 요소 하나하나 탐색을 한다.
- 탐색하면서 `slice` 메소드를 이용하여 `array` 배열의 시작과 끝을 `commands` 요소의 `[0]` 과 `[1]`의 값에 따라 정한다.
- answer 배열의 각 `index`에 `temp` 배열의 `[2]` 값을 넣는다.
