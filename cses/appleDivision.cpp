#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

long long recApples(int n, int ind, long long sumL, long long sumR){
    if(ind == n) {
        return abs(sumL - sumR);
    } else {
        cout << min(recApples(n, ind + 1, sumL + vec[ind], sumR),
                    recApples(n, ind + 1, sumL, sumR + vec[ind]));
    }
}

int main() {
    int n; cin >> n;

    for(int i = 0; i < n; ++i) {
        int aux;
        cin >> aux;

        vec.push_back(aux);
    }

    sort(vec.begin(), vec.end());

    cout << recApples(n, 0, 0, 0);
}