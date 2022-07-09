#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, a, n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
static const int MAX = 1e5+100;

int N; int a[MAX], res = 0;
bool judge = true;
// ユーザー解説：
// 　MAX回シュミレーションし、2が登場した時点で回数をprint、その後return;で
// それより後を実行しない。
// 　もしも登場しないままMAX回のシミュレーションを終えたら、-1をプリントして
// 終了にする

int main() {
  cin >> N;
  a[0] = 0;
  rep(i,N) cin >> a[i+1];
  int i = 1;
  cout << endl;
  while(true){
    if(i==2){
      break;
    }
    if(res > 10*N){
      judge = false;
      break;
    }
    i = a[i];
    res++;
  }

  cout << (judge ? res : -1) << endl;
  return 0;
}