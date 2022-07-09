#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_(i, a, n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
static const int MAX = 1e4;

long long int a, b, x;
long long int res = 0;
long long int f(long long int n, long long int x){
  // 0は全ての数の倍数
  if(n >= 0){
    return (n/x + 1);                                                        ; 
  }
  else{
    return 0;
  }
}

int main() {
  scanf("%lld%lld%lld", &a,&b,&x);

  res = f(b,x) - f(a-1,x);

  // printf("%lld\n", res);
  printf("%lld\n", res);

  return 0;
} 