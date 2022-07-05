#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 200000;

int main() {
    int r[MAX], n;
    cin >> n;
    rep(i,n) cin >> r[i];

    int minv = r[0];
    int maxv = -2000000000;

    for(int i = 1; i < n; i++ ){
        maxv = max(maxv, r[i] - minv);
        minv = min(minv, r[i]);
    }

    cout << maxv << endl;
}