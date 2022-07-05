#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

static const int MAX = 100;

void trace(int A[], int N){
    rep(i,N) {
        if( i > 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

void insertionSort(int A[], int N){
    for(int i = 1; i < N; i++){
         int v = A[i];
         int j = i - 1;
         while(j >= 0 && A[j] > v){
            A[j + 1] = A[j];
            j--;
         }
         A[j+1] = v;
         trace(A,N);
    }
}

int main() {
    int A[MAX], n;
    cin >> n;
    rep(i,n) cin >> A[i];

    trace(A,n);
    insertionSort(A,n);
} 