#include <iostream>
using namespace std;
void transform(int n)
{
    for (int i = 16; i >= 0; i--)
    {
        if (n & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
}

int main()
{
    transform(90);
    return 0;
}
