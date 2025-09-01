#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    int arr[10] = {0};

    cin >> a >> b >> c;
    int num = a * b * c;


    while (num != 0){
        arr[num % 10] += 1;
        num /= 10;
    }

    for (int i = 0; i < 10; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}
