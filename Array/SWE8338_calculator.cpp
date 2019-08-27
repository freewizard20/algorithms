#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int numbers[9];

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> numbers[i];
		}

		if (n == 1) { cout << "#" << (z + 1) << " " << numbers[0] << '\n'; continue; }

		int result = numbers[0];
		for (int i = 0; i < n-1; i++) {
			int next = numbers[i + 1];
			if (result >= 2 && next >= 2) {
				result *= next;
			}
			else {
				result += next;
			}
		}

		cout << "#" << (z + 1) << " " << result << '\n';

	}

	while(1){}
}
