// digits를 활용해 풀기보단 단순 시뮬레이션이어서 여기에 둔다

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <unordered_set>
#include <string>
#include <unordered_map>

using namespace std;

string given;

int uniqueCharacters(char a, char b, char c) {
	unordered_set<char> tmp;
	tmp.insert(a);
	tmp.insert(b);
	tmp.insert(c);
	return tmp.size();
}

int main() {
	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		cin >> given;
		long long result = 1;

		for (int i = 0; i < given.size(); i++) {
			if (i == 0) {
				if (given[i] != given[i + 1]) result *= 2;
			}
			else if (i == given.size() - 1) {
				if (given[given.size() - 2] != given.back()) result *= 2;
			}
			else {
				result *= uniqueCharacters(given[i - 1], given[i], given[i + 1]);
			}

			result = result % 1000000007;
		}

		cout << "#" << (z + 1) << " " << result << endl;
	}
}
