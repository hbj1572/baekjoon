#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m, s, s2;
    cin >> h >> m >> s;
    cin >> s2;

    s += s2;

    if (s >= 60){
        m += (s / 60);
        s %= 60;
    }
    if (m >= 60){
        h += (m / 60);
        m %= 60;
    }
    if (h >= 24){
        h %= 24;
    }
    cout << h << " " << m << " " << s;
}
