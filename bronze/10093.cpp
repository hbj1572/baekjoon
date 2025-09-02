#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a > b) swap(a, b); 

    vector<long long> v;
    for (long long i = a + 1; i < b; i++) {
        v.push_back(i);
    }

    sort(v.begin(), v.end()); 

    cout << v.size() << '\n';
    for (auto c : v) cout << c << ' ';
}
