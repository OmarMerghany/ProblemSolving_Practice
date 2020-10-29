//
// Created by OmarMerghany on 10/29/2020.
//
// fifth problem: https://a2oj.com/p?ID=24
/*
 Problem Statement:

Some computer programs have problems in displaying Arabic text, especially when mixed with English words in the same line, because Arabic is written from right to left and English is written from left to right. In this problem we will try to fix a text with some corrupted lines which consist of a mixture of Arabic and English words. For simplicity, all Arabic letters will be replaced with the letter '#'.
Each line will contain at most one English word. For a line containing an English word, the program that will fix the text will swap the words before the English word with the words after the English word. The words before the English word will remain in the same order. The words after the English word will also remain in the same order. For example, if the line is "# #### ### abc ##", it will be fixed to become "## abc # #### ###".
Please note that a line that contains words only of the same language is not corrupt.

    Input Format:
Your program will be tested on one or more test cases. The first line of the input will be a single integer T, the number of test cases (1 ≤ T ≤ 100). Next 2T lines contain the test cases, each on a pair of lines.
The first line of each case contains a single integer N, the number of words in the line to fix (1 ≤ N ≤ 100). The second line contains N words, separated by single spaces, with no leading or trailing spaces, and each word will be at least 1 character and at most 10 characters long.
Each word will be either Arabic or English. Arabic words will consist of one to ten '#' letters, and English words will consist of one to ten English lower case letters.
Each line contains at most one English word.

    Output Format:
For each test case, output, on a single line, the fixed line of input text.

    Sample Input:
3
5
# #### ### abc ##
4
## ### ## #####
4
## ##### # xyz

Sample Output:
## abc # #### ###
## ### ## #####
xyz ## ##### #
 */
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    /*
vector<char> abc;
vector<vector<char> >vec;
abc.clear();
vec.clear();
*/
    int n,z;
    cin >>n;
    int h;
    for(int ii=0; ii<n; ii++){
        int num,v=0,a=0,b=0;

        string nam;
        nam.clear();

        cin >>num;

        scanf("%d",&h);

        getline(cin,nam);

        v=nam.size();
        string nam2;
        string name="";
        nam2.clear();
        name.clear();

        //string nam3;
        // nam3.clear();
        int chec=0;
//cout<<v<<endl;
        for(int i=0; i<v ;i++){
            if(nam[i]!=' ' && nam[i]!='#'){
                //   name[a]=nam[i];
                a++;
                b=i;
                //nam3.push_back(nam[i]);
                //  cout<<name[a]<<a<<endl;
                //if(nam3[])

            }
            // else if(nam[i+1]!=' ' && nam[i]!='#')
            // else if(nam[i]!=' ' && nam[i]!='#'&& nam)
        }
        if(v==a+1){
            chec=1;
        }
        //cout<<a<<endl;
        //int xc=name.size();
        //for(int i=0;i<xc;i++){
        //    cout<< name[i]<<endl;;
        //if(name[i]==' '){
        //      chec++;
//cout << chec<<endl;
        // }
        //}
        //cout<<b<< " & "<< a<<endl;
        // this handle if there is no English letters at all
        // #### ## ###
        if(a==0 && chec==0){
            for(int i=0; i < v;i++){
                cout<<nam[i];
                //abc.push_back(nam[i]);

            }
            //  vec.push_back(abc);
            //abc.clear();
            //cout <<endl;
        }
// sdd sae
        else if(chec=1 && v==a+1){
            for(int i=0; i < v;i++){
                cout<<nam[i];
                //abc.push_back(nam[i]);

            }

        }

            // this handle the issue if the Arabic letters are in the end of the array
            // for example: ### ## abc

        else if(b==v-1&& chec==0){
            // cout<<"hello"<<endl;

            for(int i=b+1-a,j=0; i<b+1,j<a;i++,j++){
                nam2[j]=nam[i];
                // cout<<nam2[j]<<endl;
            }
            nam2[a]=nam[b-a];
            for(int i=0,j=a+1;i<b-a-1,j<v;i++,j++){
                nam2[j]=nam[i];
            }

            for(int i=0; i < v;i++){
                cout<<nam2[i];
                //abc.push_back(nam2[i]);

            }
            // vec.push_back(abc);
            //abc.clear();
            // cout<<endl;

        }

// abc ### ##

        else if(b+1-a==0&& chec==0){
            nam2.clear();
            int beg =b+1-a;
            int endd=b+1;
            for(int j=0,i=endd+1; j< v-endd-1, i<v; j++,i++){
                nam2[j]=nam[i];
                // cout<< nam[i]<<i<<endl;
            }
            //for(int i=0; i < nam2.size(); i++){
            //cout<<nam2[i];
//    abc.push_back(nam[i]);


            //}
            nam2[v-endd-1]=' ';
//nam2[a+1]=' ';
            for(int j=v-endd,i=0; j < v, i < endd; j++,i++){
                nam2[j]=nam[i];
//cout<<nam[i];
            }
//int z=nam2.size();
            for(int i=0; i < v; i++){
                cout<<nam2[i];
//    abc.push_back(nam[i]);


            }
            //  for(int i=0;i)
            //      vec.push_back(abc);
            //    abc.clear();
            //cout <<endl;

        }

            // this handle the issue if the Arabic letters are in the middle of the array

            // for example: ### abc ## ###


        else{
            int beg =b+1-a;
            int endd=b+1;

            // bring what is after the English liters in the beginning of the new array
            for(int j=0,i=endd+1; j< v-endd-1, i<v; j++,i++){
                nam2[j]=nam[i];

            }
            // put the English in the new position
            for(int j=v-endd-1,i=beg-1; j<v-endd-1+a,i<endd; j++,i++){
                nam2[j]=nam[i];

            }
            nam2[v-beg]=nam[endd];    // put whitespace after the English

            // bring what is before the English liters in the end of the new array

            for(int i=0,j=v-beg+1; i<b-a-1 , j<v; i++, j++){
                nam2[j]=nam[i];

            }


            for(int i=0; i < v;i++){
                cout<<nam2[i];
//abc.push_back(nam2[i]);

            }
            //      vec.push_back(abc);
            //    abc.clear();

        }

        cout<<endl;

//vec.push_back(v);
        //nam.clear();
        //nam2.clear();
        //z=v;
    }
    // int we=0;

//for(int k=0; k<abc.size();k++){

    //cout<<abc[k];
    //for(int b=0;b< vec.size();b++){
    //   for(int i=0; i<vec[b].size();i++){
    // if(k==vec[b]-1){
    //if(we==k){
    //    continue;
    //}
    // cout<<vec[b]-1<<endl;
    //cout<<vec[b][i];
    //}
    //      cout<<endl;
    // vec.erase(vec.begin()+(k-1-we));
    //we++;
    //    }
}


