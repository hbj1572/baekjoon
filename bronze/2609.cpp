#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n1 = 0, n2 = 0;
    cin >> n1 >> n2;
    
    cout << gcd(n1, n2) << '\n' << lcm(n1, n2);
    
    return 0;
}
