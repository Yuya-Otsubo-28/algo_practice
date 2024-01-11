#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
	string S;
	cin >> S;

	int len = S.size();
	S.at(len - 1) = '4';

	cout << S << endl;

	return (0);
}
