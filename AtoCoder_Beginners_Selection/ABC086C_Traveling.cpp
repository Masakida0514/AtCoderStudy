#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_1(i, n) for (int i = 1; i <= (int)(n); i++)

static const int MAX = 1e5 + 100;

void solve(int N, int x[], int y[], int t[]){
  bool judge = true;
  int dx,dt,dy;
  for(int i = 0; i < N; i++){
    dt = abs(t[i+1] - t[i]);
    dx = abs(x[i+1] - x[i]);
    dy = abs(y[i+1] - y[i]);
    if(dx + dy > dt){
      judge = false;
    }
    if(dt % 2 == 0){
      if((dx + dy) % 2 != 0){
        judge = false;
      }
    } else {
      if((dx+dy) % 2 == 0){
        judge = false;
      }
    }
  } // end for

  if(judge){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

int main(){
  int N, x[MAX], y[MAX], t[MAX];
  x[0] = y[0] = t[0] = 0;
  cin >> N;
  for(int i = 0; i < N ;i++) {
    cin >> t[i+1] >> x[i+1] >> y[i+1];
  }

  solve(N,x,y,t);
}