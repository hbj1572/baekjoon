#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    vector <int> set(10, 0);

    int n;
    cin >> n;

    while (n > 0){
        int digit = n % 10;
        set[digit]++;
        n /= 10;
    }

    int sixnine = set[6] + set[9];
    set[6] = (sixnine + 1) / 2;
    set[9] = set[6];

    int answer = *max_element(set.begin(), set.end());
    cout << answer;
}
