#include <iostream>
using namespace std;
int main (){
    int n1;
    cin >> n1;
    if (n1 >= 90 && n1 <= 100)
        cout << "A" << endl;
    
    else if (n1 >= 80 && n1 <= 89)
        cout << "B" << endl;
    
    else if (n1 >= 70 && n1 <= 79)
        cout << "C" << endl;

    else if (n1 >= 60 && n1 <= 69)
        cout << "D" << endl;
    
    else
        cout << "F" << endl;
    
    return 0;
}
