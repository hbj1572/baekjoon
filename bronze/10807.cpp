#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[101];
    int v;

    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> v;

    int count = 0;

    for (int j = 0; j < n; j++){
        if (arr[j] == v)
        count++;
    }
    cout << count;
}
