#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> dwarf(9);
    int sum = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> dwarf[i];
        sum += dwarf[i];
    }
    
    // 두 명을 찾아야 함
    int a = -1, b = -1;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - dwarf[i] - dwarf[j] == 100) {
                a = i; b = j;
                break;
            }
        }
        if (a != -1) break; // 찾았으면 반복문 종료
    }
    
    // 결과 출력
    vector<int> answer;
    for (int i = 0; i < 9; i++) {
        if (i == a || i == b) continue;
        answer.push_back(dwarf[i]);
    }
    
    sort(answer.begin(), answer.end()); // 오름차순 정렬
    
    for (int h : answer) cout << h << '\n';
}
