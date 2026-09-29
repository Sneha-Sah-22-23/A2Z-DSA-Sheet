#include <bits/stdc++.h>

using namespace std;

void func(int i, int n){
    if (i < 1){
        cout << n << endl;
    }
    else{
        func(i - 1, n + i);
    }
}

int FRfunc(int n){
    if (n == 0){
        return 0;
    }
    return n + FRfunc(n - 1);
}

main(){
    int N;
    cout << "Enter the N: ";
    cin >> N;
    func(N, 0);
    cout << FRfunc(N);
}