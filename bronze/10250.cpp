#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, H, W, N;
    int result;
    cin >> T;
    
    for(int i = 0; i < T; i++){//H는 호텔의 층 수 N은 몇 번째 손님
        cin >> H >> W >> N;

        if (N % H == 0){
            result = H * 100 + (N / H);
        }
        else {
            result = (N % H) * 100 + (N / H) + 1;
        }
        cout << result << '\n';
    }
    return 0;  
}
