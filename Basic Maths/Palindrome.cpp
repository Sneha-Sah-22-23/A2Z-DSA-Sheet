#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num; int n = num;
    int reverse_num = 0;

    while(n > 0){
        reverse_num = reverse_num * 10 + (n % 10);
        n = n / 10;
    }

    if (num == reverse_num) cout << "This number is a Palindrome.";
    else cout << "This number is not a Palindrome";

}