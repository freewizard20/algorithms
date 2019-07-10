# 코딩시험 전에 다시 알아야 할 것들

## Solving Algorithm Problems

1. 조건을 모두 받아 적어라
2. 알고리즘을 종이에 짜라
3. 엣지 케이스(극단 상황)를 고려해라
4. 코딩
5. 자신이 짠 코드를 읽고, 이해하고 디버깅
* 디버깅1: 알고리즘이 올바른가?
* 디버깅2: *코드를 읽어봤는가?*
* 디버깅3: 몇가지 예제로 시뮬레이션을 해봤는가?
* 디버깅4: 극단 상황(엣지 케이스)을 고려했는가?

## fast I/O
* C++
```
cin.tie(null)
ios::sync_with_stdio(false)
```
* Python

## float Precisions
* C++
```
#include <iomanip>
cout << setprecision(6); // 총 "유효숫자"이다 1.234는 4개
cout << 1.2345678
```
