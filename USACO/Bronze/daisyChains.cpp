#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int photos = 0; int sum = 0;

    int sol = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = i; j < n; ++j) {
            sum = 0;
            photos = 0;
            for(int k = i; k <= j; ++k) {
                sum += arr[k];
                photos++;
            }

            if(sum % photos != 0) {
                continue;
            }

            int avg = sum / photos;
            
            for(int k = i; k <= j; ++k) {
                if(arr[k] == avg) { 
                    ++sol;
                    break;
                }
            }
        }
    }

    cout << sol;
}