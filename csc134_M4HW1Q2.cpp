// CSC 134
// M4HW1 Gold
// Sebastian Camacho
// 03/25/2025

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number from 1-12" << endl;
    cin >> num;

    int i = 1; 
    while (i <= 12)
    {
        cout << num << " times " << i << " is " << num * i << endl;
        i++;
    }
    
    return 0;
}
