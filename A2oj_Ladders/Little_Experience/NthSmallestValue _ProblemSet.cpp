//
// Created by OmarMerghany on 10/31/2020.
//
// first problem: https://a2oj.com/p?ID=159
/*
 Problem Statement:
For this problem, you will write a program that prints the Nth smallest value in a fixed sized array of integers. To make things simple, N will be 2 and the array will always be have 10 decimal integer values.

    Input Format:
The first line of input contains a single integer T, (1 ≤ T ≤ 1000), which is the number of test cases. Each case consists of a single line containing 10 integers whose values are between 1 and 1000 inclusive.

    Output Format:
For each case, print on one line the 2nd value.

    Sample Input:
3
1 2 3 4 5 6 7 8 9 1000
338 304 619 95 343 496 489 116 98 127
1 1 2 3 4 5 6 7 8 9

    Sample Output:
2
98
1
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int arr[10];
        for(int j=0; j<10; j++){
            cin>>arr[j];
        }
        // cout<<"done"<<endl;
//sort(arr[0],arr[9]);
        int temp=0;
        for(int i=1; i<10; i++){
            temp=arr[i];
            int k=i-1;
            while(k>=0&& arr[k]>temp){
                arr[k+1]=arr[k];
                k=k-1;
                arr[k+1]=temp;
            }
        }

        cout<< arr[1]<<endl;

    }
}

