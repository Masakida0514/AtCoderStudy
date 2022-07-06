#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_1(i, n) for (int i = 1; i < (int)(n+1); i++)

static const int MAX = 1e4;


int main() {
  int N, A;
  cin >> N >> A ;
  int res = 0;

  int x=-1,y=-1,z=-1;
  rep_1(i, N){
    rep_1(j,N){
      rep_1(k,N){
        if(10000*i + 5000 * j + 1000 * k == A){
          if(i + j + k == N){
            swap(x,i);
            swap(y,j);
            swap(z,k);
          }
        }
      }
    }
  }

  cout << x << " " << y << " " << z << endl;
}