//
// Created by OmarMerghany on 11/16/2020.
//
// https://leetcode.com/problems/reverse-integer/
/*
 Given a 32-bit signed integer, reverse digits of an integer.

Note:
Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

    Example 1:

Input: x = 123
Output: 321

    Example 2:
Input: x = -123
Output: -321

    Example 3:
Input: x = 120
Output: 21

    Example 4:
Input: x = 0
Output: 0

Constraints:
-231 <= x <= 231 - 1
 */
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int reverse(int x) {
    long res = 0;
    while (x) {
        // the key idea here is:  result = result*10 + x%10;
        int a = x % 10;
        res = res * 10 + a;
        x = x / 10;
    }
    return (res < INT_MIN || res > INT_MAX) ? 0 : res;
    /*
     INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit.
     INT_MIN specifies that an integer variable cannot store any value below this limit.
     Value of INT_MAX is +2147483647.
     Value of INT_MIN is -2147483648.
     */
}