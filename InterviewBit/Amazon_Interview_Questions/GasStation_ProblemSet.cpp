//
// Created by OmarMerghany on 11/6/2020.
//
// https://www.interviewbit.com/problems/gas-station/
/*
Given two integer arrays A and B of size N.
There are N gas stations along a circular route, where the amount of gas at station i is A[i].

You have a car with an unlimited gas tank and it costs B[i] of gas to travel from station i
to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.

Return the minimum starting gas station’s index if you can travel around the circuit once, otherwise return -1.

You can only travel in one direction. i to i+1, i+2, … n-1, 0, 1, 2.. Completing the circuit means starting at i and
ending up at i again.


    Input Format
The first argument given is the integer array A.
The second argument given is the integer array B.

    Output Format
Return the minimum starting gas station's index if you can travel around the circuit once, otherwise return -1.
********************************************************************************
    For Example
 Input 1:
    A =  [1, 2]
    B =  [2, 1]
Output 1:
    1

    Explanation 1:
        If you start from index 0, you can fill in A[0] = 1 amount of gas. Now your tank has 1 unit of gas.
        But you need B[0] = 2 gas to travel to station 1.

        If you start from index 1, you can fill in A[1] = 2 amount of gas. Now your tank has 2 units of gas.
        You need B[1] = 1 gas to get to station 0. So, you travel
        to station 0 and still have 1 unit of gas left over. You fill in A[0] = 1 unit of additional gas,
        making your current gas = 2. It costs you B[0] = 2 to get to station 1, which you do and complete the circuit.
 */


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int SolutioncanCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    /*
     * O(n)
     * https://www.youtube.com/watch?v=wDgKaNrSOEI&ab_channel=Knapsak
     */
    int N = A.size();
    int overallDifference;
    overallDifference = 0;
    for (int i = 0; i < N; i++) {
        overallDifference += A[i] - B[i];
    }
    if (overallDifference < 0) {
        return -1;
    } else {
        int starting = 0, tank = 0;
        for (int i = 0; i < N; i++) {
            tank = tank + A[i] - B[i];
            if (tank < 0) {
                starting = i + 1;
                tank = 0;
            }
        }
        return starting;
    }
}

int Naive_SolutioncanCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    /*
     * O(n^2)
     * Iterate throughout the entire stations each time
     */
    int tank, station;
    int N = A.size();
    bool possible;
    for (int i = 0; i < N; i++) {
        tank = 0;
        possible = true;
        for (int j = i; j < N + i; j++) {
            station = j % N;
            tank = tank + A[station] - B[station];
            if (tank < 0) {
                possible = false;
                break;
            }
        }
        if (possible) {
            return i;
        }
    }
    return -1;
}


int Enhanced_SolutioncanCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    /*
     * O(n)
     * the logic here is to keep track of the surplus and the deficit at each gas station
     * https://www.youtube.com/watch?v=nTKdYm_5-ZY&ab_channel=AppliedAICourse
     */
    int N = A.size();
    int starting = 0, tank = 0, diff = 0;
    for (int i = 0; i < N; i++) {
        tank = tank + A[i] - B[i];
        if (tank < 0) {
            starting = i + 1;
            diff += tank;
            tank = 0;

        }
    }
    return tank + diff > 0 ? starting : -1;
}


int main() {
    srand(time(NULL));

    int N, a, b;
    vector<int> A;
    vector<int> B;
    int n = rand() % 100;
    for (int i = 0; i < n; ++i) {
        A.push_back(rand() % 10000);
    }
    for (int i = 0; i < n; ++i) {
        B.push_back(rand() % 10000);
    }
    cout<<"A/Gas vector values are: "<<endl;
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " , ";
    }
    cout << "\n------------------------------\nB/Cost vector values are: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << B[i] << " , ";
    }
    cout << "\n###########################" << endl;

    cout << "length of the vectors is: " << n << endl;
    cout << "SolutioncanCompleteCircuit is : " << SolutioncanCompleteCircuit(A, B) << endl;
    cout << "Naive_SolutioncanCompleteCircuit is : " << Naive_SolutioncanCompleteCircuit(A, B) << endl;
    cout << "Enhanced_SolutioncanCompleteCircuit is : " << Enhanced_SolutioncanCompleteCircuit(A, B) << endl;
}

