#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int weight = 0;
    int cheak = 0;

    for (int i = 0; i < s.size(); i++){
        if (s[i] != '*'){
            if (i % 2 == 0){
                weight += (s[i] - '0');
            } else {
                weight += (s[i] - '0') * 3;
            }
        } else {
            if (i % 2 == 1) cheak = 1;
        }
    }
    int v = (cheak == 1) ? 3 : 1;

    for (int i = 0; i <= 9; i++){
        if ((i * v + weight) % 10 == 0){
            cout << i << '\n';
            return 0;
        }
    }
}
