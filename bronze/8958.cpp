#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int score;
    int Ocnt;
    cin >> t;

    string p;
    for (int i = 0; i < t; i++){
        cin >> p;
        score = 0;
        Ocnt = 1;

        for (int j = 0; j < p.length(); j++){
            if (p[j] == 'O') score += Ocnt++;
            else if (p[j] == 'X') Ocnt = 1;
        }
        cout << score << '\n';
    }
}
