#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int shuffle[n];
    for(int i = 0; i < n; ++i) {
        cin >> shuffle[i];
        shuffle[i]--;
    }

    string cows[n];
    for(int i = 0; i < n; ++i) {
        cin >> cows[i];
    }

    for(int i = 0; i < 3; ++i) {
        string cowCopy[n];
        copy(cows, cows + n, cowCopy);

        for(int j = 0; j < n; ++j) {
            int aux = shuffle[j];
            swap(cows[j], cowCopy[aux]);
        }
    }

    for(int i = 0; i < n; ++i) {
        cout << cows[i] << "\n";
    }
}