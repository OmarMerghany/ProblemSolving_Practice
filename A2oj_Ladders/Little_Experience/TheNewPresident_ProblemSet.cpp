//
// Created by OmarMerghany on 11/3/2020.
//
// https://a2oj.com/p?ID=14
/*
    Problem Statement:
Finally, it is time to vote for a new president and you are really excited about that. You know that the final results may take weeks to be announced, while you can't really wait to see the results.
Somehow you managed to get the preferences list for every voter (we don't care how you managed to get this piece of information!). Each voter sorted out all candidates starting by his most preferred candidate and ending with his least preferred one. When voting, a voter votes for the candidate who comes first in his preferences list. For example, if there are 5 candidates (numbered 1 to 5), and the preferences list for one voter is [3, 2, 5, 1, 4] and the current competing candidates in the voting process are candidates 2 and 4, the voter will vote for candidate number 2.

Here are the rules for the election process:
1. There are C candidates (numbered from 1 to C), and V voters (V is always an odd number).
2. The election process consists of up to 2 rounds. All candidates compete in the the first round. If a candidate receives more than 50% of the votes, he wins, otherwise another round takes place, in which only the top 2 candidates compete for the presidency. The candidate who receives more votes than his opponent wins and becomes the new president.
3. You can safely assume that the given preferences will never cause a situation in which the second and the third candidates from the first round receive the same number of votes.
4. The voters' preferences are the same in both rounds, and each voter must vote exactly once in each round for a currently competing candidate according to his preferences.
Given the preferences lists, you need to write a program to figure out which candidate will win and in which round.

    Input Format:
Your program will be tested on one or more test cases. The first line of the input will be a single integer T, the number of test cases (1 ≤ T ≤ 100). Followed by the test cases, the first line of a test case contains two integers C and V separated by a single space. C and V (1 ≤ C, V ≤ 100) represent the number of candidates and voters respectively, followed by V lines each line contains C integers separated by a single space, representing the preferences list for a single voter (the first is his most preferable candidate while the last is his least preferable one). Each integer from 1 to C will appear exactly once in each line.

    Output Format:
For each test case, print on a single line two integers separated by a single space. The first integer is the ID of the winner candidate (a number from 1 to C), the second integer is either 1 or 2 indicating whether this candidate will win in the first round or the second one respectively.

    Sample Input:
2
2 3
2 1
1 2
2 1
3 5
1 2 3
1 2 3
2 1 3
2 3 1
3 2 1

Sample Output:
2 1
2 2
 */
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,C,V,n1,n2,z,b,m1,m2;
    //pair < float, int> cnt2[2];
    pair < float, int> cnt[105];
    int arr[105][105], mycount[105];
    vector <int> coun;

    scanf("%d",&T);
    for(int i=0;i<T;i++){
        m1=0,m2=0;
        cin>>C;  // number of candidates
        cin>>V; // number of voters
        coun.clear();
        memset(mycount, 0, sizeof(mycount));
        for(int m=0;m<V;m++){
            for(int n=0;n<C;n++){
                cin>>arr[m][n];
            }
            coun.push_back(arr[m][0]);
        }

        for(int k=0;k<C;k++){ //C not V
            mycount[k] = count (coun.begin(), coun.end(), k+1); //look for candidate K+1 (from 1 to C)
            cnt[k].first=mycount[k]; //this should be first because it sorts according to first in pair
            cnt[k].second=k+1; //the id of candidate is k+1
        }

        /*  for(int k=0;k<V;k++){
             mycount[k] = count (coun.begin(), coun.end(), arr[k][0]);
             cnt[k].second=arr[k][0];
             cnt[k].first=mycount[k];
         }*/

        sort(&cnt[0], &cnt[C]);
        float vv=V;
        if(((cnt[C-1].first)/vv)>(0.5)){
            cout <<cnt[C-1].second<<" 1"<<endl;
        }
        else{
            n1=cnt[C-1].second;
            n2=cnt[C-2].second;
            for(int m=0;m<V;m++){
                z=0;
                b=0;
                if(arr[m][0]==n1){
                    m1++;
                }
                else if(arr[m][0]==n2){
                    m2++;
                }
                else{
                    while(b==0){
                        //z++;
                        if(arr[m][z]==n1){
                            m1++;
                            b=1;
                        }
                        else if(arr[m][z]==n2){
                            m2++;
                            b=1;
                        }
                        z++;
                    }

                }

            }
            if(m1>=m2){
                cout<<n1<<" 2"<<endl;
            }
            else if(m1<m2){
                cout<<n2<<" 2"<<endl;
            }

        }
    }

}
