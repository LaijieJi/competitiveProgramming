#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    
    int arr[n];

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int count = 1;
    int aux = 1;

    for(int i = 0; i < n - 1; ++i) {
        aux = 1;
        for(int j = i + 1; j < n; ++j) {
            if(arr[j] - arr[i] <= k) {
                ++aux;
                
            }
        }
        count = max(aux, count);
    }

    cout << count;
}