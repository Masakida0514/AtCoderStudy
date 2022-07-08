#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, n, a) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
static const int MAX = 1e4;

int N, K; int res;
int main() {
  cin >> N >> K;
  // 全体の確率-どれか一つはとなり合って塗る確率
  // ②　＝　K^(N - 1)


  cout << res << endl;
  return 0;
}