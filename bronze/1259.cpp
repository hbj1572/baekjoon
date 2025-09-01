#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(1){
        cin >> s;
        if(s == "0") break;
    

    string i = s;
    reverse(i.begin(), i.end());
    if (s == i) cout << "yes\n";
    else cout << "no\n";
    }
    return 0;
}

