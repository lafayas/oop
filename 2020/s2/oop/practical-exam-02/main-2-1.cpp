#include <iostream>
using namespace std;

extern int *createArray(int n);
extern void displayArray(int *weight, int length);
extern void bmiIndex(int weight);

int main()
{
    
    int length = 4;
    int n = 4;
    int *weight1 = createArray(length);
    int weight = 0;
    *weight1 = weight;
  
  
    bmiIndex(weight);
  
  
    return 0;
}