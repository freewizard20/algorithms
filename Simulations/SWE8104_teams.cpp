#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int n, k;

int main() {
	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		cin >> n >> k;

		cout << "#" << (z + 1) << " ";
		for (int i = 1; i <= k; i++) {
			int tot = 0;
			for (int j = 1; j <= n; j++) {
				int curr;
				if (j % 2 == 0) {
					curr = (j)*k - i + 1;
				}
				else {
					curr = (j - 1) * k + i;
				}
				// cout << curr << endl;
				tot += curr;
			}
			cout << tot << " ";
		}
		cout << endl;
	}
}
