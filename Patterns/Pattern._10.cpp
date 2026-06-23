#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n; int num = 1; 
    for(int i = 1; i <= 2 * n - 1; i++){
        for(int j = 1; j <= num; j++ ){
            cout << "*" << " ";
        }
        if(i < n) num++;
        else num--;
        cout << endl;
    }
}
