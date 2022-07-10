#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, a, n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

static const int MAX = 3 * 1e5 + 100;
int N, S[MAX],dp[MAX]; int res=0;
bool judge = false;

int main() {
    cin >> N;
    rep_(x, 0, N) cin >> S[x];

    rep(i,N){
        int ct = 0;
        if(S[i]=='W'){
            rep(j,i-1){
                if(S[j]=='E') ct++;
            }
            rep_(k,i+1,N) if(S[k]=='W') ct++;
        } else {
            rep(j,i-1){
                if(S[j]=='W') ct++;
            }
            rep_(k,i+1,N) if(S[k]=='E') ct++;
        }
        dp[i] = ct;
    }

    cout << max_element(dp,dp+MAX) << endl;
}