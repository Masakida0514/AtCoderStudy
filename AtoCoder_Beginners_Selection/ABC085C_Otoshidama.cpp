#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_1(i, n) for (int i = 1; i <= (int)(n); i++)

static const int MAX = 2200;

void selectMoney(int N, int Y){
    int x,y,z,tmp;
    x=y=z=-1;
    rep(i,N+1){
        for(int j = 0; j + i < N+1; ++j){
                int tmp = N - i - j;
                int judge = 10000 * i + 5000 * j + 1000 * tmp;
                if(judge == Y){
                   x = i;
                   y = j;
                   z = tmp; 
                } 
        }
    }
    cout << x << " " << y << " " << z << endl;
}

int main() {
    int N, Y;
    cin >> N >> Y;
    selectMoney(N,Y);
}