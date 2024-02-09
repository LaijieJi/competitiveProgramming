#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, ans=0; cin >> n;
    int x[n];
    int y[n];

    for(int i=1; i<=n; i++) cin >> x[i];

    for(int i=1; i<=n; i++) cin >> y[i];

    for(int i=1; i<=n; i++){

        for(int j=i+1; j<=n; j++){

            ans=max(ans, (x[i]-x[j]) * (x[i] - x[j]) + (y[i]-y[j]) * (y[i] - y[j]));

        }

    }

    cout << ans;
}