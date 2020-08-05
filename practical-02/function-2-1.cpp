#include <iostream>
#include <string>
using namespace std;
void print_as_binary(string decimal_number)
{
    int n = stoi(decimal_number);
    int a[10];
    int i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n%2;
        n = n/2;
    }
    for (i = i -1; i >= 0; i--)
    {
        cout<<a[i];
    }
}