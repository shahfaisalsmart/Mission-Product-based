# Day 1 Problems
> Author: Mohammad Faisal

## 1. Pair Sum

Take as input N, the size of array. Take N more distinct inputs and store that in an array. Take as input “target”, a number. 
Write a function which prints all pairs of numbers which sum to target.

> This question was asked in initial rounds of Google interview.

### Constraint: 
```bash
Length of the arrays should be between 1 and 1000.
```

### Input Format
```bash
The first line of input contains an integer, N, which denotes the size of the array. 
The following N lines of input contains N integers.
The following line contains a integer, that denotes the target number. 
```

### Output Format
```
Print all pair of elements in the array which has sum equal to target element.
```

### Sample Input 1
```bash
5
1
3
4
2
5
5
```
### Sample Output 1
```bash
1 and 4
2 and 3
```
### Sample Input 2
```bash
4
10
15
3
7
17
```
### Sample Output 2
```bash
10 and 7
```
### Code in C++
```bash
 COMING SOON......
```
---

## 2. Missing Positive Integer
Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.
You can modify the input array in-place.

> This problem was asked by Stripe.

### Constraint: 
```bash
Time Limit: 1 second
```

### Input Format
```bash
The first line of input contains an integer: N, which denotes the size of the array. 
The following line contains N space separated integers. 
```

### Output Format
```
Print the missing positive integer, as described in the task.
```

### Sample Input 1
```bash
4
3  4 -1 1
```
### Sample Output 1
```bash
2
```

### Code in C++
```bash
 COMING SOON......
```
---

## 3. Mindbending Product
You are given an array A of size N, you have to construct a Product Array P (of same size) such that P[i] is equal to the product of all the elements of A except A[i]. The constraint is that you are not allowed to use division operator.

> This question was asked in interview rounds of Uber.

### Constraint: 
```bash
1 <= T <= 10
1 <= N <= 10
1 <= Ai <= 20
```

### Input Format
```bash
The first line of input contains an integer T denoting the number of test cases. Each test-case contains two lines of input. The first line of each test case contains a single integer that denotes size of the array, N. The following line of input contains N elements, separated by spaces.
```

### Output Format
```
For each testcase, print the Product array P.
```

### Sample Input 1
```bash
2
5
10 3 5 6 2
2
12 20
```
### Sample Output 1
```bash
180 600 360 300 900
20 12
```
### Explanation
```bash
Testcase1: For the product array P, at i=0 we have 3*5*6*2. At i=1 10*5*6*2. At i=2 we have 10*3*6*2. At i=3 we have 10*3*5*2. At i=4 we have 10*3*5*6
So, P is 180 600 360 300 900

Testcase2: For the product array P, at i=0, we have 20. At i=1, we have 12.
So, P is 20 12. 
```
### Code in C++
```bash
 COMING SOON......
```
---

## 4. Largest Sum of Non Adjacent Numbers
Given a list of integers, write a programme that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative. In other words, out of all subsets, which do not contain adjacent numbers of a given array (excluding the empty subset), find the maximum subset sum.

For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.

```shell
Can you do this in O(N) time and constant space?
```
> This question was asked in Airbnb.

### Constraint: 
```bash
1 <= n <= 10^4
1 <= A[i] < 10^4
Time Limit: 1 second
```

### Input Format
```bash
Line 1 : An integer N 
Line 2 : N spaced integers denoting money in each house
```

### Output Format
```
Line 1 : Maximum amount of money looted
```

### Sample Input 1
```bash
6
5 5 10 100 10 5
```
### Sample Output 1
```bash
110
```
### Sample Input 2
```bash
4
-1 -1 -1 -1
```
### Sample Output 2
```bash
-1
```
### Code in C++
```bash
 COMING SOON......
```
---

## 5. Count Decodings

Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.
For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.
You can assume that the messages are decodable. For example, '001' is not allowed.

> This question was asked in Facebook.

### Constraint: 
```bash
Time Limit: 1 second
```

### Input Format
```bash
The first and only line of input contains a string, that denotes encoded message. The encoded message will be numeric string. The length of the input string lies in the range: [1, 1000]. 
```

### Output Format
```
The first and only line of output contains number of ways in which given encoded message can be decoded.
```

### Sample Input 1
```bash
111
```
### Sample Output 1
```bash
3
```
### Code in C++
```bash
 COMING SOON......
```
---


