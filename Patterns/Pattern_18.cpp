#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n; char ch = 'A' + n - 1;
    for(int i = 0; i < n; i++){
        for(char alpha = ch - i; alpha <= ch; alpha++){
            cout << alpha << " ";
        }

        cout << endl;
    }
}
