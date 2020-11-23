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

//int main() {
//    string input1, input2;
//    getline(cin, input1);
//    getline(cin, input2);
//    int input1_length;
//    int sum1, sum2;
//    input1_length = input1.size();
//    for (int i = 0; i < input1_length; i++) {
//        sum1 = 0, sum2 = 0;
//        sum1 = int(towlower(input1[i]));
//        sum2 = int(towlower(input2[i]));
//        if (sum1 > sum2) {
//            cout << 1 << endl;
//            return 0;
//        } else if (sum1 < sum2) {
//            cout << -1 << endl;
//            return 0;
//        }
//    }
//    cout << 0 << endl;
//    return 0;
//}

int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int res = 0; // result
    for (int i = 0; i < n; i++) {
        vector<bool> visited(256);
        for (int j = i; j < n; j++) {
            // If current character is visited Break the loop
            if (visited[s[j]] == true)
                break;
                // Else update the result if  this window is larger, and mark
                // current character as visited.
            else {
                res = max(res, j - i + 1);
                visited[s[j]] = true;
            }
        }
        // Remove the first character of previous window
        visited[s[i]] = false;
    }
    return res;
}

#define NO_OF_CHARS 256

int longestUniqueSubsttr(string s) {
    int n = s.size();

    int res = 0; // result

    // last index of all characters is initialized
    // as -1
    vector<int> lastIndex(NO_OF_CHARS, -1);

    // Initialize start of current window
    int i = 0;

    // Move end of current window
    for (int j = 0; j < n; j++) {

        // Find the last index of str[j]  Update i (starting index of current window)
        // as maximum of current value of i and last index plus 1
        i = max(i, lastIndex[s[j]] + 1);
        // Update result if we get a larger window
        res = max(res, j - i + 1);
        // Update last index of j.
        lastIndex[s[j]] = j;
    }
    return res;
}

int main() {
    string input1;
    input1 = "abcabcbb";
    cout << lengthOfLongestSubstring(input1) << endl;
    return 0;
//    getline(cin, input1);

}