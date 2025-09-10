#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    vector <long long> v(n);
    
    for (long long i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    for (auto c : v)
    cout << c << '\n';
}
