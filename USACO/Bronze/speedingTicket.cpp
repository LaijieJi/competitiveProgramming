#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int seg[100], journey[100];

    int mx = 0;
    int pos = 0;
    int prev = 0;
    int l, s;

    for(int i = 0; i < n; ++i) {
        cin >> l >> s;
        for(pos = 0; pos < l; ++pos) {
            seg[prev + pos] = s;
        }
        prev = prev + l;
    }

    pos = 0;
    prev = 0;

    for(int i = 0; i < m; ++i) {
        cin >> l >> s;
        for(pos = 0; pos < l; ++pos) {
            journey[prev + pos] = s;
        }
        prev = prev + l;
    }

    for(int i = 0; i < 100; ++i) {
        if(journey[i] > seg[i]) {
            mx = max(mx, journey[i] - seg[i]);
        }
    }

    cout << mx;
}