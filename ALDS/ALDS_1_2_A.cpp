#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 100;

void trace(int A[], int n){
    rep(i,n) {
        if( i > 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

int count_bubbleSort(int A[], int n){
    int count = 0, i=0;
    int flag_rev = true;
    while(flag_rev){
        flag_rev = false;
        for(int j = n - 1; j >= i + 1;j--){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
                flag_rev = true;
                count++;
            }
        }
        i++;
    }
    return count;
}

int main() {
    int A[MAX], n,ct;
    cin >> n;
    rep(i,n) cin >> A[i];
    ct = count_bubbleSort(A,n);
    trace(A,n);
    cout << ct << endl;
}