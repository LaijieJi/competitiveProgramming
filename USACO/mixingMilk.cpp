#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <climits>
using namespace std;

#define mp make_pair
#define f first
#define s second
#define sz(x) int((x).size())

int main() {
    int arr[3], cap[3];
    int aux;
    cin >> cap[0] >> arr[0] >> cap[1] >> arr[1] >> cap[2] >> arr[2];

    for(int i = 0; i < 100; ++i) {
        int b1 = i % 3, b2 = (i + 1) % 3;
        
        aux = min(arr[b1], cap[b2] - arr[b2]);

        arr[b1] -= aux;
        arr[b2] += aux;

    }

    for(int i = 0; i < 3; i++) {
        cout << arr[i] << "\n";
    }
}
