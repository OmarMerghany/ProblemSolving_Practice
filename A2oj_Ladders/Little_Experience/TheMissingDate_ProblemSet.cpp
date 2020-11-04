//
// Created by OmarMerghany on 11/4/2020.
//
// The Missing Date problemset:  https://a2oj.com/p?ID=192

/*
    Problem Statement:
Abdelkarim has been lost in the desert after falling down from a plane, and he couldn't remember anything except his date of birth and his age.
Abdelkarim knows some magical rules of the stars, and he can get the correct direction by looking at the stars if he knows the current month and year.
Given the month and year of Abdelkarim's date of birth and his age (how many years and how many months), print the current year and month.

    Input Format:
Your program will be tested on one or more test cases. The first line of the input will be a single integer T , the number of test cases (1 <= T <= 100). Followed by the test cases, each test case is described in two lines. The first line will contain 2 integers y1 and m1 (1 <= y1 <= 3000) (1 <= m1 <= 12) which represent Abdelkarim's birth year and month respectively, the second line will contain 2 integers y2 and m2 (1 <= y2 <= 3000) (1 <= m2 <= 12) which means Abdelkarim is y2 years and m2 months old.

    Output Format:
For each test case, print a single line which contains 2 integers, y3 and M3 which represent the current year and month respectively.

    Sample Input:
3
1993 6
21 2
2012 12
1 8
3000 12
3000 12

    Sample Output:
2014 8
2014 8
6001 12

 */

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,mon,y1,year;
    int arr[2][2];
    scanf("%d",&T);
    //cin>>T;
    //cout<<T<<endl;
    for(int i=0;i<T;i++){
        scanf("%d %d %d %d",&arr[0][0],&arr[0][1],&arr[1][0],&arr[1][1]);
        // cin>>arr[0][0];
        //cin>>arr[0][1];
        //cin>>arr[1][0];
        //cin>>arr[1][1];
        mon=arr[0][1]+arr[1][1];
        if(mon>12){
            y1=1;
            mon=mon-12;
            year=arr[0][0]+arr[1][0]+y1;
            cout<<year<<" "<<mon<<endl;
        }
        else{
            y1=0;
            year=arr[0][0]+arr[1][0]+y1;
            cout<<year<<" "<<mon<<endl;


        }
    }
}