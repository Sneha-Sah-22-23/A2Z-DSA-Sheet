#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
    for(int i = 1; i <= n; i++){
        //space
        for(int j = 1; j <= n - i + 1; j++){
            cout << ' ';
        }

        //star
        for(int k = 1; k <= 2 * i - 1; k++){
            cout << '*';
        }

        //space
        for(int j = 1; j <= n - 1 + 1; j++){
            cout << ' ';
        }
        cout << endl;
    }
}
