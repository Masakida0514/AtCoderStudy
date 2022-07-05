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

  // ターミナルを小さくし過ぎると結果出てこないので注意
  vector<vector<char>> res(N, vector<char>(N, '-'));
  rep(i,M){
    A.at(i)--; B.at(i)--;
    res.at(A.at(i)).at(B.at(i)) = 'o';
    res.at(B.at(i)).at(A.at(i)) = 'x';
  }

  rep(i,N){
    rep(j,N){
      cout << res.at(i).at(j);
      if (j == N - 1) {
        cout << endl;
      } else {
        cout << ' ';
      }
    }
  }
}
