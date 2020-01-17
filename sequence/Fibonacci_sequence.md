# 피보나치 수열

---

## 피보나치 수열이란?

- 앞에 두 수를 더해서 현재 위치의 수를 만드는 수열이다.
- 구현하는 방법은 `재귀함수`와 `반복문`가 있는데, 주로 `재귀함수`로 구현한다.

## Example

```
0, 1, 1, 2, 3, 5, 8, 13 ...
```

## Source

```c++

int fibo(int num){
  if(num == 0) return 0;
  else if(num == 1) return 1;
  else return fibo(num-1) + fibo(num-2);
}

int main(void){
  int num;
  int i;

  printf("\n피보나치 수 입력 : \n" );
  scanf("%d" , &num) ;

  for(i = 0 ; i < num ; i++ ){
    printf("%d " , fibo(i));
  }
  printf("\n\n");
  return 0;
}
```
