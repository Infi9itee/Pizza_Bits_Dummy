#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int quick(vector<int64_t>& a, int l, int r, int& c){
    int64_t piv = a[r];
    int in = l - 1;
    for(int i = l; i < r; i++){
        if(a[i] < piv){
            in++;
            swap(a[i], a[in]);
            if(a[i] != a[in]){
                c++;
            }
        }
    }
    swap(a[r], a[in + 1]);
    if(a[r] != a[in + 1]){
        c++;
    }
    return in + 1;
}

void quick_sort(vector<int64_t>& a, int l, int r, int& c){
    if(l < r){
        int p = quick(a, l, r, c);
        quick_sort(a, l, p - 1, c);
        quick_sort(a, p + 1, r, c);
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  t = 1;
  while(t--) {
    int64_t example = 145467687;
    int64_t n;
    cin >> n;
    cout << ((1 << n) & example);
    // vector<int64_t> a(n);
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // int c = 0;
    // quick_sort(a, 0, n - 1, c);
    // for(int i = 0; i < n; i++){
    //     cout << a[i] <<" ";
    // }
    // cout << "\n" << "Number of interchange: " << c <<"\n";
  }
}
