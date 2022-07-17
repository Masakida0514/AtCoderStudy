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



int N,X,Y;
unsigned long long int red[10];
unsigned long long int blue[10];


void red_shift(int X, int level, unsigned long long int red[], unsigned long long int blue[]) {
    blue[level] = X * red[level];
    red[level - 1] += red[level];   
}

void blue_shift(int Y, int level, unsigned long long int red[], unsigned long long int blue[]) {
    blue[level - 1] = Y * blue[level];
    red[level - 1] += blue[level];   
}

int main(){
    cin >> N >> X >> Y;
    N-=1;
    rep(i,10){
        red[i] = 0;
        blue[i] = 0;
    }

    red[N] = 1;
    blue[N] = 1;



    rrep(n,N,0){
        blue_shift(Y,n,red,blue);
        red_shift(X,n,red,blue);

        N-=1;
    }

    cout << blue[0] << endl;


}