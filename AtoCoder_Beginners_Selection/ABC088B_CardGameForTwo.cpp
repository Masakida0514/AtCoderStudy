#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 1e2;


int main() {
  //   int N, A, B;
  //   cin >> N >> A >> B;
  //   int res = 0;

  int N, A[MAX];
  cin >> N;
  rep(i,N) cin >> A[i];
  int res= 0;

  sort(A, A + N, greater<int>());
  rep(i,N){
    int judge = (i%2==0) ? + A[i] : - A[i];
    res += judge;
  }

  cout << res << endl;
}