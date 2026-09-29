#include <bits/stdc++.h>

using namespace std;

void func(int n, int i){
    if (i < 1) return;
    else cout << i << " "; 
    func(n, --i);
}

// Using Backtracking

void BTfunc(int i, int n){
    if (i > n) return;
    BTfunc(i+1, n);
    cout << i << " ";
}

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Standard Recursion:" ;
    func(N, N);
    cout << "Backtracking Recursion:" ;
    BTfunc(1, N);
}