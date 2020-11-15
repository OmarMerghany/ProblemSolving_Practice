//
// Created by OmarMerghany on 11/15/2020.
//
// https://codeforces.com/problemset/problem/112/A
/*
 Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
    Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

    Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

    Examples
    input
aaaa
aaaA
    output
0
    input
abs
Abz
    output
-1
    input
abcdefg
AbCdEfF
    output
1
    Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order
 */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);
    int input1_length;
    int sum1, sum2;
    input1_length = input1.size();
    for (int i = 0; i < input1_length; i++) {
        sum1 = 0, sum2 = 0;
        sum1 = int(towlower(input1[i]));
        sum2 = int(towlower(input2[i]));
        if (sum1 > sum2) {
            cout << 1 << endl;
            return 0;
        } else if (sum1 < sum2) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}