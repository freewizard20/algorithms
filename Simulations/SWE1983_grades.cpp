#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
int k;
float scores[100][3];
float total[100];

int main() {

	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> scores[i][j];
				total[i] = scores[i][0] * 0.35 + scores[i][1] * 0.45 + scores[i][2] * 0.2;
			}
		}
		float currtotal = total[k - 1];
		sort(total, total + n);
		int rank = 0;
		for (int i = 0; i <= n; i++) {
			if (total[i] == currtotal) rank = i;
		}
		rank = n - rank - 1;
		int percentile = rank / (n/10);
		string grades[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };
		cout << "#" << (z + 1) << " " << grades[percentile] << endl;
	}
}
