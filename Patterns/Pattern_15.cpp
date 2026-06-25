#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n; int X = n;
    for(int i = 1; i <= n; i++){
        for(char ch = 'A'; ch < 'A' + X; ch++){
            cout << ch << " ";
        }
        cout << endl;
        X--;
    }
}
