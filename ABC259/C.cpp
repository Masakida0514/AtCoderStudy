#include <bits/stdc++.h>
#include <string.h>
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

bool judge = true;
string S, T;

int main() {
  cin >> S >> T;
  if(S[S.size()] != T[T.size()] or S[0] != T[0]) {
    judge = false;
  }
  if(T[1] != T[0] and T[1] != S[1]){
    judge = false;
  }
  if(T[1] == T[0] and S[1] != S[0]){
    judge = false;
  }

  rep(i,1e5) {
    S += '#';
    T += '#';
  }

  rep(i,T.size()){
    if(T[i] != S[i]){
      if(i > 1){
        if(S[i-2] == S[i-1]){
          S = S.insert(i, string(1,S[i-1]));
        } else {
          judge = false;
        }
      } 
    }
  }

  if(judge) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}