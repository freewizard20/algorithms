# Algorithm practice and implementations
**개인 저장소입니다!!!**

# naming convention

{{문제출처 + 번호}}_{{문제제목}}.{{확장자}}

## 문제출처
1. SWE : [SW Expert Academy(Samsung)](https://swexpertacademy.com)
2. BJ : [Baekjoon Online Judge](https://www.acmicpc.net/)
3. GG : [GeekforGeeks](https://www.geeksforgeeks.org)
4. LC : [LeetCode](https://leetcode.com/)
5. Goog : [Google Kickstart](https://codingcompetitions.withgoogle.com/kickstart)
6. CC : [CareerCup](https://www.careercup.com/)
7. DC : [DailyCodingProblem](https://www.dailycodingproblem.com/)

# 레포가 저장된 방식

1. Language 폴더를 통해 빠르게 언어의 요점을 테스트합니다.
2. 용도에 맞는 순서대로(아래) 효율적인 기초 구현체를 배우고 연습합니다.
3. 각 주제에 맞는 문제를 출처에서 풀어보거나, 폴더에 저장된 문제를 찾아가서 풀어도 됩니다.

## 알고리즘 문제를 푸는 법

1. 조건을 모두 받아 적어라
2. 알고리즘을 종이에 짜라
3. 엣지 케이스(극단 상황)를 고려해라
4. 코딩
5. 자신이 짠 코드를 읽고, 이해하고 디버깅
* 디버깅0: 디버거(debugger)를 쓰면 엄청 빨라집니다
* 디버깅1: 알고리즘이 올바른가?
* 디버깅2: 코드를 읽어봤는가?
* 디버깅3: 몇가지 예제로 시뮬레이션을 해봤는가?
* 디버깅4: 극단 상황(엣지 케이스)을 고려했는가?

## 알고리즘의 기초부터 시작하려면

1. Sort/basic 구현 연습
2. Search/basic 구현 연습
3. Array, List, String, Tree 기초 연습
4. HashTable, Graph 기초 연습
5. Bruteforce의 combination, permutation, backtracking 기초 연습
6. Greedy, Recursion 기초 연습
7. DynamicProgramming 기초 연습
8. Simulation 문제 풀어보기
9. 위의 순서대로 응용 문제 풀어보기
10. Digits, number theory, bitwise 기타 주제 연습
* 문제는 크게 "코딩대회"식과 "코딩인터뷰"식이 있는데 길고 인풋/아웃풋이 주어진 문제가 코딩대회식이다.

## 삼성 코딩 테스트

1. 주제 : ExhaustiveSearch, BFS, DFS, Simulation, Coordinates_etc, 해당 기초 구현체 이해 및 문제 연습
2. [SW Expert Academy](https://swexpertacademy.com), [BJ code.plus - 기초편](https://code.plus/course/32), [BJ code.plus - 문제편](https://code.plus/course/34), [BJ code.plus - 연습편](https://code.plus/course/33)

### 문제 출처

1. [SW Expert Academy](https://swexpertacademy.com)
2. [Baekjoon Online Judge](https://www.acmicpc.net/)
3. [Dovelet.com](http://59.23.150.58/)


## 코딩 인터뷰

1. 알고리즘의 기초를 탄탄히 한 후에
2. 아래의 소스를 통해 연습합니다. 보고 배울 좋은 정답이 있으면 좋습니다(개인적인 실패담..효율적인 코드를 많이 보고 배워야 합니다 ㅠㅠ)
3. 제 코드의 품질은 좋지 못하니(같이 공부하는 학생인지라;;) 돌아가는 용도로만 확인하시길 바랍니다(아니면 문제도 같이 있으니 풀어보셔도)

### Practice sources

1. [Leetcode](https://leetcode.com/)
2. [GeekforGeeks](https://www.geeksforgeeks.org)
3. [Careercup](https://www.careercup.com/)
4. [DailyCodingProblem](https://www.dailycodingproblem.com/)

# topics

## Algorithm topics
* searching
* sorting
* graph
* bit
* pattern searching
* geometric
* mathematical
* probability
* game theory

## Data structure topics
* Array
* List
* Stack
* Queue
* Tree
* Hash
* Graph
* String
* Matrix
* Advanced

# How to run

these code may not run. try :

* for c/cpp programs

  ` g++ -o {{executable name}} {{code file name}}`
  
* for java programs(on windows. for linux, no need for encoding/classpath flags)

` javac {{java file name}} -encoding UTF8`

`java -classpath . {{Main class name}}`

* for node.js algorithms

`node {{filename}}`

You may need to modify fs.readFileSync directory if in other than Linux. You can use a text input.
