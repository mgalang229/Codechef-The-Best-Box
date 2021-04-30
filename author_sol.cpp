#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double p, s;
		cin >> p >> s;
		double a = (p - sqrt(p * p - 24 * s)) / (12 * 1.0);
		double v = (s / 2) * a - (p / 4) * a * a + a * a * a;
		cout << fixed << setprecision(2) << v << '\n';
	}
	return 0;
}
