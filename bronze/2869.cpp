#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, V, D = 0;
    cin >> A >> B >> V;

    D = (V - A) / (A - B);

    if ((V - A) % (A - B) != 0){
        cout << D + 2 << '\n';
    }
    else cout << D + 1 << '\n';

}
