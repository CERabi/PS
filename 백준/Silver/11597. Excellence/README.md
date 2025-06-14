# [Silver V] Excellence - 11597 

[문제 링크](https://www.acmicpc.net/problem/11597) 

### 풀이

정렬 이후 각 반대쪽의 합이 최소가 되게 하면 된다.

### 성능 요약

메모리: 1776 KB, 시간: 28 ms

### 분류

그리디 알고리즘, 정렬

### 제출 일자

2025년 5월 18일 13:10:18

### 문제 설명

<p>The World Coding Federation is setting up a huge online programming tournament of teams comprised of pairs of programmers. Judge David is in charge of putting teams together from the Southeastern delegation. Every student must be placed on exactly one team of two students. Luckily, he has an even number of students who want to compete, so that he can make sure that each student does compete. However, he’d like to maintain his pristine reputation amongst other judges by making sure that each of the teams he fields for the competition meet some minimum total rating. We define the total rating of a team to be the sum of the ratings of both individuals on the team.</p>

<p>Help David determine the maximum value, X, such that he can form teams, each of which have a total rating greater than or equal to X.</p>

### 입력 

 <p>The first line of input contains a single positive integer n (1 ≤ n ≤ 10<sup>5</sup> , n is even), the number of students who want to enter the online programming tournament. Each of the following n lines contains one single integer s<sub>i</sub> (1 ≤ s<sub>i</sub> ≤ 10<sup>6</sup>), the rating of student i.</p>

### 출력 

 <p>Print, on a single line, the maximum value, X, such that David can form teams where every team has a total rating greater than or equal to X.</p>

