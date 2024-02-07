#include <bits/stdc++.h>

using namespace std;

int main(){
    int y, x, n;
    cin >> y >> x >> n;
    string s;
    char c;

    for(int i = 0; i < y; ++i) {
        s = "";
        for(int j = 0; j < x; ++j) {
            cin >> c;

            for(int k = 0; k < n; ++k) {
                s += c;
            }
        }

        for(int k = 0; k < n; ++k) {
                cout << s << "\n";
        }
    }
}