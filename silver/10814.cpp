#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;

    pair<int, string> tmp;
    vector <pair<int, string>> v;
    
    for (int i = 0; i < n; i++){
        cin >> tmp.first >> tmp.second;
        v.push_back(tmp);
    }
    stable_sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    cout << v[i].first << ' ' << v[i].second << '\n';
}
