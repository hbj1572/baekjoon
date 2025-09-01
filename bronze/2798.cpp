#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, sum(-1), max(-1);
    cin >> n >> m;

    vector <int> card(n);

    for (int i = 0; i < n; i++) cin >> card[i];

    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k = j + 1; k < n; k++){
                sum = card[i] + card[j] + card[k];
                if (max < sum && sum <= m){
                    max = sum;
                }
            }
        }
    }
    cout << max;
    return 0;
}
