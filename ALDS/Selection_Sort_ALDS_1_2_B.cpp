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

int selectionSort(int A[], int N){
    int ct = 0, minv=0;
    rep(i,N){
        for(int j = i; j < N; j++) {
            minv = min(minv, A[j]);
        }
        A[i] = minv;
        ct++;
    }

    return ct;
}


int main(){
    int A[MAX], N, ct;
    cin >> N;
    rep(i,N) cin >> A[i];

    ct = selectionSort(A,N);
    // output
    trace(A, N);
    cout << ct << endl;
}