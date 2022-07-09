#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, a, n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
// #pragma GCC optimize ("-O3")
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

static const int MAX = 1e4;

int N, M, X, T, D; int res = 0;
bool judge = false;

int main() {
  cin >> N >> M >> X >> T >> D;

  if(M >= N){
    res = T;
  } else if (M >= X and M <= N){
    res = T;
  } else if(M >= 0 and M <= X){
    res = T - (X - M) * D;
  }

  cout << res << endl;
  return 0;
}