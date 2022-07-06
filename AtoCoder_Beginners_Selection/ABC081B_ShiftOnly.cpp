#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 200;


int main() {
    int A[MAX], N, ct = 0;
    cin >> N;
    
    rep(i,N) cin >> A[i];

    bool odd = 1;
    while(odd){
        rep(i,N){
            if(A[i] % 2 != 0){
                odd *= 0; 
            }
        }
        if(odd){
            rep(i,N){
                A[i] = A[i] / 2;
            }
            ct++;
        }
    }
    cout << ct << endl;
}