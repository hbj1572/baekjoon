#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[101] = {0};
    int N, M;// N은 바구니의 갯수, M은 줄(line)
    cin >> N >> M;

    for (int x = 0; x < M; x++){
        int i, j, k;
        cin >> i >> j >> k;
        for (int y = i; y <= j; y++){
            arr[y] = k;
        }
    }
    for (int i = 1; i < N+1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
