#include <bits/stdc++.h>

using namespace std;

int main(){
    int num; 
    cout << "Enter number: ";
    cin >> num;
    int reverse_num = 0;
    int last_digit;

    while(num > 0){
        last_digit = num % 10;
        reverse_num = reverse_num * 10 + last_digit;
        num = num/10;
    }

    cout << "The reverse of the number is " << reverse_num;
}