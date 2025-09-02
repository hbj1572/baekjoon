#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int n;
   cin >> n;
   int array[1000001];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    sort(array, array + n);// sort 함수는 오름차순 정리 처음 원소가 최댓값이고 마지막 원소가 최솟값을 가짐

    cout << array[0] << " " << array[n - 1];
    
    return 0;
}

