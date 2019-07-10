#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> numbers;

int main() {

	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		numbers.clear();
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			numbers.push_back(x);
		}

		sort(numbers.begin(), numbers.end());
		
		int H = 0;
		int i = 0;
		while (i < n) {
			int num = numbers[i];
			int bigger = n - i;

			if (num <= bigger) {
				H = numbers[i];
			}
			else {
				H = max(H, bigger);
				break;
			}

			// find next contact point
			while (i < n - 1 && numbers[i] == numbers[i + 1]) {
				i++;
			}
			i++;
		}
		cout << "#" << (z + 1) << " " << H << endl;
	}
}
