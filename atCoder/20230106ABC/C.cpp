#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	int n, q;
	cin >> n >> q;
	deque<pair<int, int>> d;
	rep(i, 1, n + 1) d.push_back({i, 0});

	rep (i, 0, q) {
		int t;
		cin >> t;
		if (t == 1) {
			char c;
			cin >> c;
			auto[x, y] = d[0];
			if (c == 'R') d.push_front({x + 1, y});
			if (c == 'L') d.push_front({x - 1, y});
			if (c == 'U') d.push_front({x, y + 1});
			if (c == 'D') d.push_front({x, y - 1});
			d.pop_back();
			} else {
				int x;
				cin >> x;
				cout << d[x - 1].first << " " << d[x - 1].second << endl;
			} 
		}

	return (0);
}
