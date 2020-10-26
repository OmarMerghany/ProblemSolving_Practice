//
// Created by Omar Merghany on 10/26/2020.
//

// first problem: https://a2oj.com/p?ID=1
/*
    Problem Statement:
Omar is the youngest programer in the world, he is just 14 months old (when this problem was added), and he has just decided to write his first program.
This program is very simple, the program should be able to read 2 numbers and print the sum of them.
Can you help Omar by writing a correct program so that he can use it to check if his program is correct or not?

    Input Format:
Your program will be tested on one or more test cases. The first line of the input will be a single integer T, the number of test cases (1 ≤ T ≤ 100). Followed by the test cases, each test case is described in one line which contains 2 integers separated by a single space X Y (1 ≤ X,Y ≤ 100). X and Y are the 2 numbers which you should print the sum of them.

    Output Format:
For each test case, print a single line contains a single integer which is the sum of X and Y.

Sample Input:
5
22 12
23 12
1 1
2 3
100 100

Sample Output:
34
35
2
5
200
 */

#include <iostream>
using namespace std;
int n, b, c, sum;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b;
        cin >> c;
        sum = b+c;
        cout << sum <<endl;
    }
}
