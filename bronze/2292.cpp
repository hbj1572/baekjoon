#include <bits/stdc++.h>   
using namespace std;

int main(){
    int N;
    cin >> N;
    int room = 0;
    
    for (int sum = 2; sum <= N; room++)
        sum += 6 * room;

    if (N == 1) room = 1;
    cout << room;
    
}
