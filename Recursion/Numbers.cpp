#include <bits/stdc++.h>
using namespace std;

void count(int num){
    if (num > 10) return;
    else cout << num << endl; count (++num);
}

int main(){
    int NUM = 13;
    count(NUM);
}