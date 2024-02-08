#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int s, t, b;
    int arr[1000];
    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < n; ++i) {
        cin >> s >> t >> b;
        --s; --t;
        for(int j = s; j < t; ++j) {
            arr[j] += b;
        }
    }

    int max = 0;
    for(int i = 0; i < 1000; ++i) {
        if(arr[i] > max) max = arr[i];
    }

    cout << max;
}