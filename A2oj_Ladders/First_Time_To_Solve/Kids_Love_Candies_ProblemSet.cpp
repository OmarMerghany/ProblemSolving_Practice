//
// Created by Omar Merghany on 10/26/2020.
//
// second problem: https://a2oj.com/p?ID=17
/*
    Problem Statement:
Your son's birthday is coming soon (assume that you have a son), and you promised to make the best party ever for him. He will be very happy if he can invite all his friends to this party (he has many friends), but unfortunately you can't invite everyone because you have a limited number of candies, and you want everyone to be happy.
As we all know, kids love to eat a lot of candies of the same type, let's say a kid will be happy only if he can eat at least K candies of the same type.
Given K, and the number of available candies of each type, calculate the maximum number of kids where you can make all of them happy by giving each one at least K candies of the same type.

    Input Format:
Your program will be tested on one or more test cases. The first line of the input will be a single integer T, the number of test cases (1 ≤ T ≤ 100). Followed by the test cases, each test case is on two lines. The first line of each test case contains two integers N, the number of different candies (1 ≤ N ≤ 100), and K, the minimum number of candies which will make a kid happy as described above (1 ≤ K ≤ 100). The second line of each test case contains N integers, separated by a single space, which are the available number of candies of each type. There will be at least 1 candy and at most 100 candies of each type.

    Output Format:
For each test case, print on a single line one integer, the maximum number of kids you are asked to calculate as described above.
    Sample Input:
2
3 2
4 5 7
3 8
4 5 7

    Sample Output:
7
0
*/
#include <iostream>
using namespace std;
int n, numofCandy, k;
int divid, outt, candy1;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> numofCandy;
        cin >> k;
        int sum = 0;
        for (int j = 0; j < numofCandy; j++){
            cin >> candy1;
            divid =candy1/k;
            outt = sum + divid;
            sum = outt;
        }
        cout << outt<< endl;
    }
}
