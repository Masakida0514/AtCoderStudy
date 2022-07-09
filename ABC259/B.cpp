#include <bits/stdc++.h>
#include <math.h> /* M_PI */
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

double a, b, d;

int main() {
  cin >> a >> b >> d;
  d = d * (M_PI / 180);
  double aa = a*cos(d) - b*sin(d);
  double bb = a*sin(d) + b*cos(d);

  cout << fixed << setprecision(20) << aa << " " << bb << endl;
  return 0;
}