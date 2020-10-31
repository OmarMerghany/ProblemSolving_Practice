//
// Created by OmarMerghany on 10/31/2020.
// https://codeforces.com/problemset/problem/4/A
/*
 A. Watermelon
time limit per test: 1 second
memory limit per test: 64 megabytes
input: standard input
output: standard output
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.
Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.
    Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

    Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Examples
input
8
output
YES

Note: For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).

 */


//  The explanations here is:
//      every odd number can NOT be divided into two even parts --> odd - even = odd
//      every even number can be divided into two even parts --> even - odd = even
//      Edge case is: 2 as it can NOT be divided into two even parts, 1 is odd number, and can not
//      be divided into 2 & 0 as one boy will not take part in addition to that 0 is not even number

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    if (w == 2)
        cout << "NO" << endl;
    else if (w % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}