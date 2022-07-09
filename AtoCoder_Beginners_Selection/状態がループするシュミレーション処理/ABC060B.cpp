#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, a, n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
static const int MAX = 1e4;

int A, B, C; int res;
bool judge = false;

int main() {
  cin >> A >> B >> C;
  rep(i,10000){
    if(A * i % B == C){
      judge = true;
    }
  }

  if(judge) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}