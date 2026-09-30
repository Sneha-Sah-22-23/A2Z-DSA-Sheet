#include <bits/stdc++.h>

using namespace std;

void Reverse_arr(int arr[], int i, int n){
    if (i >= n/2) return;
    swap(arr[i], arr[n - i - 1]);
    Reverse_arr(arr, i + 1, n);
}

int main(){
    int nums[6] = {9, 8, 3, 2, 5, 6};
    Reverse_arr(nums, 0, 6);
    for (int i = 0; i < 6; i++){
        cout << nums[i] << " ";
    }
}