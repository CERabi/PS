# [Ruby V] Banks - 10350 

[문제 링크](https://www.acmicpc.net/problem/10350) 

### 풀이

친구가 분명 날먹문제라고 했는데,,,, </br>
각설하고 처음엔 주위에 가장 큰 영향을 주는 bank는 절댓값이 가장 큰 노드라 생각하여 greedy하게 가장 작은 bank를 갱신하는 방식으로 min heap을 이용해서 풀었지만 TLE가 났고, 단순히 모든 방법을 시도해서는 안된다는 결론을 얻었다. </br>
여러가지 시도하다가 한 번의 마법 이동이 전체 자본의 총량을 바꾸지 않는다는 사실(자본 k(k < 0)인 은행이 마법 이동을 했을때 + 2k 에 옆으로 각각 -k씩 해서 자본 총량 all에 대해 all + 2k - k - k로 아무 영향도 주지 않는다)을 알았다. </br>
추가적으로, 하나의 구간에서 한 번의 마법 이동을 통해 all만큼 음수를 채울수 있음을 알아냈다. 이를 통해 (|음수 구간합| / 전체 구간합)이란 공식을 도출 할 수 있었고, 소숫점 만큼의 이동횟수는 불가능하므로 ceil()연산을 통해 소숫점을 올림해주었다. </br>
나머지는 시간이 문제라 생각했는데, 문제 조건상 O(N^2)가 가능하여 바로 구현했다.</br>

### 성능 요약

메모리: 1152 KB, 시간: 204 ms

### 분류

애드 혹, 수학, 누적 합

### 제출 일자

2025년 4월 8일 13:27:24

### 문제 설명

<p>On Wall Street from Wonderland, we have n banks, with 10000 > n > 0. Each bank has exactly two neighbours, the left (L) and right (R) neighbour. The first bank’s left neighbour is the last bank, while the last bank’s right neighbour is the first bank. Each bank i(n>i≥0) has a capital k<sub>i</sub> with 32000>k<sub>i</sub>>-32000. The entire capital of all banks put together is known to be positive. Whenever some capital k<sub>i</sub> of bank i is negative, the Bank Fairy can do a magic move and turn the capital into a positive one. For instance, if k<sub>i</sub>=-7, after the magic move, k<sub>i</sub>=7. Unfortunately, the magic move has consequences for both neighbours of bank i. Each sees its capital reduced with the absolute value of the capital of bank i. For instance if bank L has capital k<sub>L</sub>=5 and bank R has capital k<sub>R</sub>=11, then after the magic move k<sub>L</sub>=-2 and k<sub>R</sub>=4.</p>

<p>Which is the minimal number of magic moves which the Bank Fairy has to do in order to make the capital of all banks greater than or equal to 0?</p>

### 입력 

 <p>On the first input line, we have the number n of banks. On the second input line, we have the capitals k<sub>i</sub>(n>i≥0) of all banks, in the order in which they are found on Wall Street from Wonderland. Each capital is separated by a single whitespace from the next one, except for the final capital which is directly followed by the newline character.</p>

### 출력 

 <p>The output contains a single line with the value of the minimal number of magic moves.</p>

