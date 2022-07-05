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
 

int main() {

}