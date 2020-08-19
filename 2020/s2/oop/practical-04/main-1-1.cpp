#include <iostream>
using namespace std;
extern void copy_2d_strings(string first[][2], string second[][2], int n);

int main()
{
    int n = 3;
    string first[n][2] = {"a", "b", "c", "d", "e", "f"};
    string second[n][2];
    copy_2d_strings(first, second, n);
    return 0;
}