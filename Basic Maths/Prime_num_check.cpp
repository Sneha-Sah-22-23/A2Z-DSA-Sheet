#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num; 
    int count = 0;

    for(int i = 1; i * i <= num; i++){
        if(num % i == 0){
            count++;
            if(num / i != i) count++;
        }
    }

    if(count == 2){
        cout << "This is a prime number.";
    }
    else cout << "This is not a prime number";
}