#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<tuple<int, string, int>> note;
    vector<string> names{"Bessie", "Elsie", "Mildred"};

    for(int i = 0; i < n; ++i) {
        int d, v;
        string s;
        cin >> d >> s >> v;
        note.push_back(make_tuple(d, s, v));
    }

    sort(note.begin(), note.end());

    int prod[3][100];
    for(int i = 0; i < 100; ++i) {
        prod[0][i] = 7;
        prod[1][i] = 7;
        prod[2][i] = 7;
    }

    for(int i = 0; i < n; ++i) {
        int which;
        if(get<1>(note[i]) == names[0]) which = 0;
        else if(get<1>(note[i]) == names[1]) which = 1;
        else which = 2;

        for(int j = get<0>(note[i]); j < 100; ++j) {
            prod[which][j] += get<2>(note[i]);
        }
    }

    for(int i = 0; i < 100; i++) {
        cout << prod[0][i] << '/' << prod[1][i] << '/' << prod[2][i] << "\n";
    }

    int changes = 0;
    vector<string> display;
    for(int i = 0; i < 100; ++i) {
        string temp = "a";
        int maxProd = max(prod[0][i], max(prod[1][i], prod[2][i]));
        for(int j = 0; j < 3; ++j) {
            if(prod[j][i] == maxProd) temp += j;
        }
        display.push_back(temp);
    }

    string prev = "";
    for(int i = 0; i < 100; ++i) {
        if(display[i] != prev) {
            changes++;
            prev = display[i];
        }
    }

    cout << changes - 1;
}