#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, a, n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

static const int MAX = 1e2+100;
int N, A[2][MAX], dp[2][MAX]; int res=0;
bool judge = false;

int main() {
    cin >> N;
    rep_(y, 0, 2) rep_(x, 0, N) cin >> A[y][x];
 
    dp[0][0] = A[0][0];
    rep_(y, 0, 2) rep_(x, 0, N) {
        if (x) chmax(dp[y][x], dp[y][x - 1] + A[y][x]);
        if (y) chmax(dp[y][x], dp[y - 1][x] + A[y][x]);
    }
 
    cout << dp[1][N - 1] << endl;
}