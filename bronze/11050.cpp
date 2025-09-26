#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, fac1 = 1, fac2 = 1, fac3 = 1;
    cin >> n >> k;

    for (int i = 1; i <= n; i++){
        fac1 *= i;
    }
    for (int j = 1; j <= k; j++){
        fac2 *= j;
    }
    for (int t = 1; t <= n - k; t++){
        fac3 *= t;
    }

    cout << fac1 / (fac2 * fac3);
}
