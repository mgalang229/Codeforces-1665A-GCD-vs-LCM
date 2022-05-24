#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// 1 + 1 + 2 + 1 = 5
		// my approach:
		// first summand should be equal to 1
		// so place 1 and n - 3 (the other two 1s will be placed in the following positions)
		
		// second summand should be equal to 1 as well
		// so place two 1s
		
		// gcd(1, n - 3) + lcm(1, 1) = n [true]
		// gcd(1, n - 3) = lcm(1, 1) [true]
		// because:
		// the gcd of 1 and any number is 1 itself
		// and the lcm of 1 and itself is 1 also
		cout << 1 << " " << n - 3 << " " << 1 << " " << 1 << '\n';
	}
	return 0;
}
