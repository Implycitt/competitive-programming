#include <bits/stdc++.h>

using namespace std;

struct Cow {
	int x, y;
	int ind;
};

int main() {
	int n;
	cin >> n;
	vector<Cow> nCows;
	vector<Cow> eCows;

	for (int i = 0; i < n; ++i) {
		char dir;
		int x, y;
		cin >> dir >> x >> y;
		if (dir == 'N') {
			nCows.push_back({x, y, i});
		} else if (dir == 'E') {
			eCows.push_back({x, y, i});
		}
	}

	sort(nCows.begin(), nCows.end(),
	     [&](const Cow &c1, const Cow &c2) { return c1.x < c2.x; });
	sort(eCows.begin(), eCows.end(),
	     [&](const Cow &c1, const Cow &c2) { return c1.y < c2.y; });

	vector<int> stopPos(n, -1);
	for (const Cow &ncow : nCows) {
		for (const Cow &ecow : eCows) {
			if (ncow.x > ecow.x && ncow.y < ecow.y) {
				int nTrav = ecow.y - ncow.y;
				int eTrav = ncow.x - ecow.x;

				if (nTrav < eTrav && stopPos[ecow.ind] == -1) {
					stopPos[ecow.ind] = ncow.x;
				}

				if (nTrav > eTrav && stopPos[ecow.ind] == -1) {
					stopPos[ncow.ind] = ecow.y;
					break;
				}
			}
		}
	}

	vector<int> dist(n, -1);

	for (const Cow &nc : nCows) {
		if (stopPos[nc.ind] != -1) {
			dist[nc.ind] = stopPos[nc.ind] - nc.y;
		}
	}

	for (const Cow &ec : eCows) {
		if (stopPos[ec.ind] != -1) { dist[ec.ind] = stopPos[ec.ind] - ec.x; }
	}

	for (int d : dist) {
		cout << (d == -1 ? "Infinity" : to_string(d)) << '\n';
	}
}