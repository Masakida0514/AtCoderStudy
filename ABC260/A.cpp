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

static const int MAX = 1e4;

string S;

int main(){
    cin >> S;
    if(S[0] == S[1] and S[1] == S[2]){
        cout << -1 << endl;
        return 0;
    }
    else if(S[0]==S[1]){
        cout << S[2] << endl;
        return 0;
    } else if(S[1]==S[2]){
        cout << S[0] << endl;
        return 0;
    } else if(S[0]==S[2]){
        cout << S[1] << endl;
        return 0;
    } else {
        cout << S[0] << endl;
        return 0;
    }
}