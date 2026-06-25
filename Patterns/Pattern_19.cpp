#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
    for(int i = 1; i <= n; i++){
        //stars
        for(int j = n - i + 1; j >= 1; j--){
            cout << "*";
        }
        //spaces
        for(int k = 1; k <= (i - 1) * 2; k++){
            cout << " ";
        }

        //stars
        for(int j = n - i + 1; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 1; i <= n; i++){
        //stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        //spaces
        for(int k = (n - i) * 2; k >= 1; k--){
            cout << " ";
        }
        //stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
