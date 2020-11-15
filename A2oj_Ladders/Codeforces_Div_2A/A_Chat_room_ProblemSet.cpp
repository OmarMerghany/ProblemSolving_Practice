//
// Created by OmarMerghany on 11/16/2020.
//
// https://codeforces.com/problemset/problem/58/A
/*
 Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

    Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

    Output
If Vasya managed to say hello, print "YES", otherwise print "NO".

    Examples

    input
ahhellllloou
    output
YES
    input
hlelo
    output
NO
 */
int main() {
    string input;
    getline(cin, input);
    int input1_length;
    input1_length = input.size();
    string word = "hello";

    int a = 0, count = 0;
    for (int i = 0; i < input1_length; i++) {
        if (input[i] == word[a]) {
            a++;
            count++;
        }
    }
    if (count == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
