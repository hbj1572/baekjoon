#include <bits/stdc++.h>
using namespace std;

bool findPrime(int n){
    if (n <= 1) return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int test, n, decimal = 0;
    cin >> test;
    for (int i = 0; i < test; i++){
        cin >> n;
        if (findPrime(n) == true){
            decimal++;
        }
    }
    cout << decimal << '\n';
    return 0;
}
