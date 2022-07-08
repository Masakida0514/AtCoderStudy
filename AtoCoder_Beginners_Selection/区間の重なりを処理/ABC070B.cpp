#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, a, n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
static const int MAX = 1e4;

int A,B,C,D; int res=0;
bool judge = false;

int main() {
  cin >> A >> B >> C >> D;

  rep_(i,A,B){
    if(i >= C and i < D){
      res++;
    }
  }
  cout << res << endl;
  return 0;
}