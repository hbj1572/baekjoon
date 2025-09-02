#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[25] = {0};
    string S;

    cin >> S;

    for (char i = 'a'; i <= 'z'; i++){
        cout << (int)S.find(i) << ' ';
    }
    return 0;
}
