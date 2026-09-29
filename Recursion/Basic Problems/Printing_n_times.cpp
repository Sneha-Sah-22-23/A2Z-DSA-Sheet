#include <bits/stdc++.h>

using namespace std;

void func(int i, int n, string str){
    if (i > n) return;
    cout << i << " " << str << endl;
    func(++i, n, str);
}

int main(){
    int N;
    cout << "Enter n: ";
    cin >> N;
    cin.ignore();
    string S;
    cout << "Enter String: ";
    getline(cin, S);
    func(1, N, S);
}