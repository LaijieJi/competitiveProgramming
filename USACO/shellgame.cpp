#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(3);
    vector<int> shell(3);

    for(int i = 0; i < 3; ++i) {
        shell[i] = i;
    }

    for(int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        --a; --b; --c;

        swap(shell[a], shell[b]);

        v[shell[c]]++;
    }

    cout << max(v[0], max( v[1], v[2]));

}
