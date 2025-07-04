# [Silver II] Modern Art - 21616 

[문제 링크](https://www.acmicpc.net/problem/21616) 

### 풀이

칸이 홀수 번 칠해지면 금색, 짝수 번 칠해지면 검정색이 되므로 입력 처리 후 row와 column의 칠해진 합이 짝수/홀수인지 체크하면 된다.

### 성능 요약

메모리: 40172 KB, 시간: 216 ms

### 분류

애드 혹, 수학

### 제출 일자

2025년 4월 22일 08:40:10

### 문제 설명

<p>A new and upcoming artist has a unique way to create checkered patterns. The idea is to use an M-by-N canvas which is initially entirely black. Then the artist repeatedly chooses a row or column and runs their magic brush along the row or column. The brush changes the colour of each cell in the row or column from black to gold or gold to black.</p>

<p>Given the artist’s choices, your job is to determine how much gold appears in the pattern determined by these choices.</p>

### 입력 

 <p>The first line of input will be a positive integer M. The second line of input will be a positive integer N. The third line of input will be a positive integer K. The remaining input will be K lines giving the choices made by the artist. Each of these lines will either be R followed by a single space and then an integer which is a row number, or C followed by a single space and then an integer which is a column number. Rows are numbered top down from 1 to M. Columns are numbered left to right from 1 to N.</p>

### 출력 

 <p>Output one non-negative integer which is equal to the number of cells that are gold in the pattern determined by the artist’s choices.</p>

