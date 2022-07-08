#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, n, a) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
static const int MAX = 55;

char c[MAX][MAX]; int H, W, cnt;

int main() {
	cin >> H >> W;
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) cin >> c[i][j];
	}
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			if (c[i][j] == '#' && c[i][j - 1] != '#' && c[i - 1][j] != '#' && c[i][j + 1] != '#' && c[i + 1][j] != '#') cnt++;
		}
	}
	if (cnt == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}