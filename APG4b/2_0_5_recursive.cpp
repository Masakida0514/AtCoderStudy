#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


// a ~ bの総和を計算する (a ≦ b)という前提
int sum_range(int a, int b) {
  // ベースケース
  if (a == b) {
    return a;
  }
  // 再帰ステップ
  return sum_range(a, b - 1) + b;  //「a~bの総和」=「a~(b-1)の総和」+ b
}


// (補助関数)
// dataのi番目以降の要素の総和を計算する
int array_sum_from_i(vector<int> &data, int i) {
  // ベースケース
  if (i == data.size()) {
    return 0;  // 対象の要素がないので総和は0
  }
  // 再帰ステップ
  int s = array_sum_from_i(data, i + 1);  // i+1番目以降の要素の総和
  return data.at(i) + s;  // 「i番目以降の要素の総和」=「i番目の要素」+ s
}
// dataの全ての要素の総和を計算する
int array_sum(vector<int> &data) {
  return array_sum_from_i(data, 0);
}



// i~N-1の範囲にNの約数が存在するか判定する 
bool has_divisor(int N, int i) {
  // base1 : 
  if (i == N) {
    return false;
  }
  // base2 : 割り切れるなら約数
  if (N % i == 0){
    return true;
  }
  // recursive
  return has_divisor(N, i + 1)
}

bool is_prime(int N) {
  if (N==1){
    return false;
  } else if (N==2) {
    return true;
  } else {
    return !has_divisor(N,2)
  }
}
 



// x番の組織について、子組織からの報告書が揃った時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int complete_time(vector<vector<int>> &children, int x) {
  // (ここに追記して再帰関数を実装する)
  if (children.at(x).size() == 0){
    return 0;
  }

  int max_c = 0;
  for (int c : children.at(x)){
    int count = complete_time(children,c) + 1;
    max_c = max(max_c, count);
  }
  return max_c;
}

// これ以降の行は変更しなくてよい

int main() {
  int N;
  cin >> N;

  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  // 組織の関係から2次元配列を作る(理解しなくてもよい)
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧  // N×0の二次元配列
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }

  // 0番の組織の元に報告書が揃う時刻を求める
  cout << complete_time(children, 0) << endl;
}
