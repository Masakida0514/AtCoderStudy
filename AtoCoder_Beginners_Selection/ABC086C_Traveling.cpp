#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_1(i, n) for (int i = 1; i <= (int)(n); i++)

static const int MAX = 1e4;


int main() {
  int N;
  int origin_x, origin_y;
  origin_x = origin_y = 0;
  int t, x, y;
  int distance;
  int diff_t;

  bool judge = false;

  // 繰り返し部分
  rep(i, N){
    cin >> t >> x >> y;

    diff_t = t - diff_t;
    distance = abs(x - origin_x) + abs(y - origin_y);

    origin_x = x;
    origin_y = y;
  
    if(diff_t < distance){
      break;
    } else if (diff_t == distance){
      continue;
    } else { 
      bool judge_2 = false;
      rep(m, diff_t){
        // t > x + y の時
        if(diff_t - (x+y) % (2*m - 1) == 0){
          judge_2 = true;
          break;
        }
      }
      if(!judge_2){
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