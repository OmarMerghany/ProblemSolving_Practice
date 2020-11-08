//
// Created by OmarMerghany on 11/6/2020.
//

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
