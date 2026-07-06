#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1; int num2;
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    int GCD = 0;

    //Extreme Brute Force Approach, Time Complexity: O(min(num1,num2))
    for(int i = 1; i <= min(num1,num2); i++){
        if (num1 % i == 0 && num2 % i == 0){
            GCD = i;
        }
    }

    //Better than Brute Force, Time Complexity: O(min(num1,num2))
    cout << "The GCD of " << num1 << " and " << num2 << " is " << GCD << endl;

    for(int i = min(num1,num2); i >= 1; i--){
        if (num1 % i == 0 && num2 % i == 0){
            GCD = i;
            break;
        }
    }

    cout << "The GCD of " << num1 << " and " << num2 << " is " << GCD << endl;
}