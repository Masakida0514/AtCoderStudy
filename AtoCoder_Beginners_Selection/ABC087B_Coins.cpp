#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 200;


int main() {
    int A,B,C,X, ct = 0;
    cin >> A >> B >> C >> X;

    rep(a,A+1){
        rep(b,B+1){
            rep(c,C+1){
                if((500*a) + (100*b) + (50*c) == X){
                    ct+=1;
                }
            }
        }
    }

    cout << ct << endl;
}