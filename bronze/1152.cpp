#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 1;
    string str = "";

    getline(cin, str);
    int strlength = str.length();

    for (int i = 0; i < strlength; i++){
        if (str[i] == ' '){
            cnt++;
        }
    }
    if (str[0] == ' '){
        cnt--;
    }
    if (str[strlength - 1] == ' '){
        cnt--;
    }
    cout << cnt;
    return 0;
}
