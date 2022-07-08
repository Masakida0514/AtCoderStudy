#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, n, a) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
static const int MAX = 100;

int main() {
  int H,W;
  cin >> H >> W;

  string S[MAX];
  rep(i,H) cin >> S[i];

  rep(y,H){ 
    rep(x,W){
      if(S[y][x] == '.'){
        int ct = 0;
        rep_(dx, 2, -1){ 
          rep_(dy, 2, -1){
            if(x+dx >= 0 and y+dy >= 0 and x+dx < W and y+dy < H){
              if(S[y+dy][x+dx] == '#'){
                ct++;
              }
            }
          }
        }
        S[y][x] = char('0' + ct);
      }
    }
  }

  rep(y,H) {
    rep(x,W){
       cout << S[y][x];
    }
    cout << endl;
  }
}