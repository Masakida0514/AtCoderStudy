#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 200000;


int main() {
    int a,b;
    cin >> a >> b;
    string s =  (a * b % 2 == 0) ? "Even" : "Odd";
    cout << s << endl;
}