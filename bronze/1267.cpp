#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2, Y = 0, M = 0;
    cin >> n1;

    for (int i = 0; i < n1; i++){
        cin >> n2;
        Y += (n2 / 30 + 1) * 10;
        M += (n2 / 60 + 1) * 15;
    }
   
    if (Y < M) cout << "Y " << Y;
    else if (M < Y) cout << "M " << M;
    else if (M == Y) cout << "Y M " << M;

    return 0;
}
