#include <bits/stdc++.h>

using namespace std;



int main() {
    string vec;

    cin >> vec;

    sort(vec.begin(), vec.end());

    vector<string> perms;

    do {
        perms.push_back(vec);
    } while (next_permutation(vec.begin(), vec.end()));

    cout << perms.size() << "\n";
    for(auto str : perms) {
        cout << str << "\n";
    }
}