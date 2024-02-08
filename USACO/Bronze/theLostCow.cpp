#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;
#define ll long long 

void solve (int x, int y) {
	//decides the direction of the target
	bool front = x < y;
	ll step = 1;
	bool direction = 1;
	ll totalStep = 0;
	ll worstCase = 9*abs(x-y); // apparently this is the worst case of the steps traveled
	while (totalStep <= worstCase) {
		// determines whether the next move would meet the target
		if ((front && x+step >= y && direction) || (!front && x-step <= y&& !direction)) {
			totalStep += abs(x-y);  
			break;
		}	
		step *= 2;
		totalStep += step;  // or else we have to factor in the steps for the round trip
		direction = !direction; 
	}
	cout << totalStep;
}

int main() {
    int N, M;
    cin >> N >> M;
    solve(N, M);
    return 0;
}