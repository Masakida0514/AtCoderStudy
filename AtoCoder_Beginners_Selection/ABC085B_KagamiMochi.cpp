#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 1e4;


int main() {
  // int N, A, B;
  // cin >> N >> A >> B;
  // int res = 0;

  int N, A[MAX];
  cin >> N;
  rep(i,N) cin >> A[i];
  int res = 1;

  sort(A, A + N);
  for(int i = 1; i < N; i++){
    if(A[i] != A[i-1]){
      res += 1;
    }
  }
  


  cout << res << endl;
}