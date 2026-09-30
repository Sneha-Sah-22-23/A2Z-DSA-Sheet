#include <bits/stdc++.h>

using namespace std;

bool Palindrome(string &X, int i, int n){
    if (i >= n/2) return true;
    else if( X[i] != X[n - i - 1]){
        return false;
    }
    return Palindrome(X, i + 1, n);
}

int main(){
    string ele;
    cout << "Enter a String: ";
    cin >> ele;
    cout << Palindrome(ele, 0, ele.length());
}