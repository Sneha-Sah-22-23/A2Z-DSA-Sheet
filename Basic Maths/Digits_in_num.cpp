#include <bits/stdc++.h>

using namespace std;

int main(){
    int num; 
    cout << "Enter number: ";
    cin >> num;
    int n = num;
    int count = 0;

    while(n > 0){
        n = n/10;
        count++; 
    }

    cout << "The number of digits in " << num << " is " << count;
}