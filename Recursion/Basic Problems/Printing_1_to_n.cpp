#include <bits/stdc++.h>

using namespace std;

void func(int i, int n){
    if (i > n) return;
    cout << i << " " ; 
    func(++i, n); 
}

// Using Backtracking

void BTfunc(int i, int n){
    if(i < 1) return;
    BTfunc(i - 1, n);
    cout << i << " ";
}

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Standard Recursion:" ;
    func(1, N);
    cout << "Backtracking Recursion:" ;
    BTfunc(N, N);
}
