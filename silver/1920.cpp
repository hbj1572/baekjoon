#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end()); 

    cin >> m;
    for (int j = 0; j < m; j++) {
        int x;
        cin >> x;
        if (binary_search(v.begin(), v.end(), x)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}
