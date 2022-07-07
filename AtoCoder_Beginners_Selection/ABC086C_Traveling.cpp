#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_1(i, n) for (int i = 1; i <= (int)(n); i++)

static const int MAX = 1e5;


void checker(int N, int x[], int y[], int t[]){
  int origin_x, origin_y;
  origin_x = origin_y = 0;
  int distance;
  int diff_t;

  bool judge = true;

  rep(i,N){
    if(i==0){
      diff_t = 0;
    } else {
      diff_t = t[i] - t[i-1];
    }
    
    distance = abs(x[i] - origin_x) + abs(y[i] - origin_y);
    origin_x = x[i];
    origin_y = y[i];

    if(diff_t < distance){
      judge = false;
      break;
    } else if (diff_t == distance){
      continue;
    } else { 
      bool judge_2 = false;
      rep(m, diff_t){
        // t > x + y の時
        if(diff_t - (x[i]+y[i]) % (2*m - 1) == 0){
          judge_2 = true;
          break;
        }
      }
      if(!judge_2){
        judge = false;
        break;
      }
    }
  }

  if(judge){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}


int main() {
  int N;
  cin >> N;

  int t[MAX], x[MAX],y[MAX];
  rep(i,N){
    cin >> t[i] >> x[i] >> y[i];
  }

  checker(N,x,y,t);
}