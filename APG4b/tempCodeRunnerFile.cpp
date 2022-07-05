

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
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