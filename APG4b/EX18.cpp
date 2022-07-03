#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<string>> res(N, vector<int>(N, "-"));
  rep(i,M){
    res.at(A.at(i)).at(B.at(i)) = "o";
    res.at(A.at(i)).at(B.at(i)) = "x";
  }
  rep(i,N){
    rep(j,N){
        cout << res.at(i).at(j);
    }
    cout << endl;
    }
}
