#include <iostream>
#include <string>
using namespace std;
void print_as_binary(string decimal_number)
{
    int n = stoi(decimal_number);
    for (int i = 8; i >= 0; i--)
    {
        if (n & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
}