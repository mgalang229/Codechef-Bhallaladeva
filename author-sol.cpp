#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	// calculate the prefix sum of the sequence
	vector<long long> pref(n);
	pref[0] = a[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i - 1] + a[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int k;
		cin >> k;
		// we need to choose the smallest 'ceil(n / (k + 1))' coins
		int coins_needed = ceil(1.0 * n / (k + 1));
		cout << pref[coins_needed - 1] << '\n';
	}
	return 0;
}
