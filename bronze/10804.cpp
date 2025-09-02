#include <bits/stdc++.h>
using namespace std;

int main(){
    int interval1, interval2;
    vector<int> card{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (int i = 0; i < 10; i++){
        cin >> interval1 >> interval2;
        reverse(card.begin() + (interval1 - 1), card.begin() + interval2); // 인덱스는 0부터 시작하므로 -1을 해줘야함
    }

    for (auto c : card){
        cout << c << " ";
    }
    return 0;
}
