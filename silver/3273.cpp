#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n;

    vector <int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    
    cin >> x;

    int left = 0, right = n - 1, count = 0;
    while (left < right){
        int sum = a[left] + a[right];
        if (sum == x){
            count++;
            left++;
            right--;
        } else if (sum < x){
            left++;
        } else{
            right--;
        }
    }
    cout << count;
}
