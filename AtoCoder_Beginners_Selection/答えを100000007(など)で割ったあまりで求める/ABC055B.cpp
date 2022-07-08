#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, n, a) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
static const int MAX = 1e9 + 7;

int N; long long res=1;

int main() {
  cin >> N;
  for(int i = 1; i <= N; i++){
    res *= i;
    res = res % MAX;
  } 
  cout << res << endl;
  return 0;
} 