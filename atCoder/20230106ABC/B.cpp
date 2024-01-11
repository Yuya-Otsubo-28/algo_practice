#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	int max = n + 1;

	rep(i, 0, max) {
		rep(j, 0, max - i) {
			rep (k, 0, max - j - i) {
				cout << i << " " << j << " " << k << endl;
			}
		}
	}

	return (0);
}
