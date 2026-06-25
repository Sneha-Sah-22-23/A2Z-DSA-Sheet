#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n; char ch = 'A';
    for(int i = 1; i <= n; i++){
        //space
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        //Alphabet
        for(char alph = 'A'; alph < ch; alph++){
            cout << alph;
        }

        cout << ch;

        for(char alph = ch - 1; alph >= 'A'; alph--){
            cout << alph;
        }
        
        cout << endl;
        ch++;
    }
}
