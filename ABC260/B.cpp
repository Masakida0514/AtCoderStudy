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

template<typename T>
T FindMax(T *arr, size_t n)
{
    int max = arr[0];

    for (size_t j = 0; j < n; ++j) {
        if (arr[j] > max) {
            max = j;
        }
    }
    return max;
}


string S;
int N,X,Y,Z;
int A[1100], B[1100];
int res[1100];
int true_res[1100];
int main(){
    cin >> N >> X >> Y >> Z;
    rep(i,N) cin >> A[i];
    rep(i,N) cin >> B[i];
    rep(i,X){
        int max = A[0];
        int maxj = 0;
        rep(j,1100){
            if(A[j] > max){
                max = A[j];
                maxj = j;
            }
        }
        true_res[i] = maxj + 1;
        res[i] = maxj;
        A[maxj] = -1;
    }
    
    rep(i,X){
        B[res[i]] = -1;
    }

    rep(i,Y){
        int max = B[0];
        int maxj = 0;
        rep(j,1100){
            if(B[j] > max){
                max = B[j];
                maxj = j;
            }
        }
        true_res[i+X] = maxj + 1;
        res[i+X] = maxj;
        A[maxj] = -1;
        B[maxj] = -1;
    }

    rep(i,Z){
        int max = A[0] + B[0];
        int maxj = 0;
        rep(j,1100){
            if(A[j] + B[j] > max){
                max = A[j] + B[j];
                maxj = j;
            }
        }
        true_res[i+X+Y] = maxj + 1;
        res[i+X+Y] = maxj;
        A[maxj] = -1;
        B[maxj] = -1;
    }
    rep_(i,X+Y+Z,1100){
        true_res[i] = 10000;
    }
    sort(true_res, true_res + 1100); 
    rep(i,X+Y+Z){
        cout << true_res[i] << endl;
    }

}