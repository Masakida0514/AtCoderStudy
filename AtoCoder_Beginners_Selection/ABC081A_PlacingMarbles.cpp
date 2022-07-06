#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 200000;


int main() {
    string s;
    cin >> s;
    
    int ct = 0;
    if(s[0] == '1'){
        ct+=1;
    }
    if(s[1] == '1'){
        ct+=1;
    }
    if(s[2] == '1'){
        ct+=1;
    }
    cout << ct << endl;
}