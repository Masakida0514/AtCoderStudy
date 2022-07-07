#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 1e5;


// call array for string
string divide[4] = {"dreamer", "dream", "eraser", "erase"};

int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

  bool check = true;
  for(int i=0; i < S.size();){
    bool check2 = false;
    for(int k = 0; k < 4; ++k){
      string s = divide[k];
      if(S.substr(i, s.size()) == s){
        check2 = true;
        i += s.size();
      }
    }
    if(!check2){
      check = false;
      break;
    }
  }
    
  // 出力
  if(check){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}