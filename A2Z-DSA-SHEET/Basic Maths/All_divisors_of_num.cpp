#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    vector<int> divisor;

    for(int i = 1; i * i <= num; i++){
        if(num % i == 0) {
            divisor.push_back(i);
            if (num/i != i) divisor.push_back(num/i);
        }
    }

    sort(divisor.begin(), divisor.end());
    cout << "All divisor of number: ";
    for(int j = 0; j < divisor.size(); j++){
        cout << divisor[j] << " ";
    }

}