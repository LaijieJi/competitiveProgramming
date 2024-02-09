#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, m; cin >> x >> y >> m;
    int maxX = m / x;
    int maxY = m / y;

    int sol = 0;

    for(int i = 0; i < maxX; ++i){
        for(int j = 0; j < maxY; ++j) {
            int aux = x * i + y * j;
            if(aux > m) { continue; }
            sol = max(sol, x * i + y * j);
        }
    }

    cout << sol;
}