#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int box[26]{};

    int a[26];
    int b[26];

    string as, bs;

    for(int i = 0; i < n; ++i) {
        int a[26] = {};
        int b[26] = {};
        cin >> as >> bs;
        for(int j = 0; j < as.length(); ++j){
            a[as.at(i) - 97]++;
        }

        for(int j = 0; j < bs.length(); ++j) {
            b[bs.at(i) - 97]++;
        }

        for(int j = 0; j < 26; ++j) {
            box[j] = max(a[j], b[j]);
        }
    }

    for(int i = 0; i < 26; ++i) {
        cout << box[i] << "\n";
    }

}