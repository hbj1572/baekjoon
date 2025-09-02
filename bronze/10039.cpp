#include <bits/stdc++.h>
using namespace std;

int main(){
    int score, test = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> score;
        if (score < 40){
            score = 40;
        }
        test += score;    
    }  
    cout << test / 5 << '\n';
}
