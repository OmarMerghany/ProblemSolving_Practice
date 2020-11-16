//
// Created by OmarMerghany on 11/16/2020.
//
// https://codeforces.com/problemset/problem/339/A
/*
Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.
The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.
You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.

    Examples
    input
3+2+1
    output
1+2+3

    input
1+1+3+1+3
    output
1+1+1+3+3

    input
2
    output
2

*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, string_length, intCount;
    int ones = 0, twos = 0, threes = 0;
    string input, output;
    getline(cin, input);
    string_length = input.size();
    intCount = (string_length + 1) / 2;
    for (int i = 0; i <= string_length; i++) {
        if (input[i] == '1') {
            ones += 1;
        } else if (input[i] == '2') {
            twos += 1;
        } else if (input[i] == '3') {
            threes += 1;
        }
    }
    output = "";

    for (int i = 0; i < intCount; i++) {
        if (ones >= 1) {
            output += '1';
            ones--;
        } else if (twos >= 1 && ones == 0) {
            output += '2';
            twos--;
        } else if (threes >= 1 && ones == 0 && twos == 0) {
            output += '3';
            threes--;
        }
        if (i < intCount - 1) {
            output += '+';
        }
    }
    cout << output << endl;
}
