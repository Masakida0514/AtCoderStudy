#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, n, a) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
static const int MAX = 55;

int main(){
    int H, W;
    cin >> H >> W;
    string S[MAX];

    rep(i,H) cin >> S[i];
    //　全ての点において隣接する黒点があれば、塗りつぶしてかける
    // true ; rep h , w 黒点チェック　if隣ない → false
    bool judge = true;
    rep(j,H){rep(i,W){
        if(S[j][i] == '#'){
                bool check_black = false;
                // 斜めが計算されいてる
                // i +- 1 と j +- 1のみでok
                rep_(di,2,-1){
                    if (di == 0){
                        continue;
                    }
                    int ii = i + di;
                    if(ii >= 0 and ii < W){
                        if(S[j][ii]=='#'){
                            check_black = true;
                        }
                    }
                }

                rep_(dj,2,-1){
                    if (dj == 0){
                        continue;
                    }
                    int jj = j + dj;
                    if(jj >= 0 and jj < H ){
                        if(S[jj][i]=='#'){
                            check_black = true;
                        }
                    }
                }
                if(!check_black){
                    judge = false;
                }
            }
        }
    }
    string res = (judge) ? "Yes" : "No";
    cout << res << endl; 
}
