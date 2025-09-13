#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second; 
    }

    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
        if (a.second == b.second) return a.first < b.first; 
        return a.second < b.second; 
    });

    for (auto c : v) {
        cout << c.first << " " << c.second << "\n";
    }
}
