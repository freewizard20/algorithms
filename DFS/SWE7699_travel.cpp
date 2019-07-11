#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <unordered_set>

using namespace std;

char board[20][20];
int r, c;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int maxLocations;

bool isinside(int x, int y) {
	return (x >= 0 && x < r && y >= 0 && y < c);
}

void solve(vector<int> & seen, int x, int y, int places) {
	if (seen[board[x][y]-'A'] == 0) {
		seen[board[x][y] - 'A'] = 1;
	}
	else {
		return;
	}
	if (maxLocations < places) maxLocations = places;

	for (int i = 0; i < 4; i++) {
		int currx = x + dx[i];
		int curry = y + dy[i];
		if (currx >= 0 && currx < r && curry >= 0 && curry < c) {
			solve(seen, currx, curry, places+1);
		}
	}
	seen[board[x][y] - 'A'] = 0;
	return;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		cin >> r >> c;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> board[i][j];
			}
		}
		maxLocations = 0;
		vector<int> seen(26, 0);
		seen.push_back(board[0][0] - 'A');
		solve(seen, 0, 0, 1);
		cout << "#" << (z+1) << " " << maxLocations << endl;
	}	
}
