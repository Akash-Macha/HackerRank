/*
https://www.hackerrank.com/challenges/30-sorting/problem
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int totalSwaps = 0;
    for(int k=1 ; k<=n-1;k++){
        int swaps = 0;
        for(int i=0;i<a.size()-1;i++){
            if(a[i] > a[i+1])
            {
                ++swaps;
                swap(a[i],a[i+1]);
            }
        }
        totalSwaps += swaps;
    }
    cout << "Array is sorted in " << totalSwaps << " swaps.\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[a.size()-1];
    return 0;
}
