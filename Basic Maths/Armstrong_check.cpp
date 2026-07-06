#include <bits/stdc++.h>

using namespace std;

int main(){
    int num; 
    cout << "Enter Number: ";
    cin >> num;
    int n = num; int armstg = 0;
    int expo = 0;

    while(n > 0){
        expo += 1;
        n = n / 10;
    }

    n = num;

    while(n > 0){
        armstg += pow(n % 10, expo);
        n = n / 10;
    }

    if (num == armstg) cout << "This number is a Armstrong.";
    else cout << "This number is not a Armstrong.";
}