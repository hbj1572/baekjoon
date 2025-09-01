#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum;
    vector<int> v(4);
    
    for(int i = 0; i < 3; i++){
        cin >> v[0] >> v[1] >> v[2] >> v[3];
        sum = accumulate(v.begin(), v.end(), 0);
        if (sum == 0) cout << 'D';
        else if (sum == 1) cout << 'C';
        else if (sum == 2) cout << 'B';
        else if (sum == 3) cout << 'A';
        else if (sum == 4) cout << 'E';
        cout << '\n';
    }
    return 0;
}
