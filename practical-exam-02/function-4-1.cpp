#include <iostream>
using namespace std;

int *createArray(int n)
{
    int *createArray = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin>> *(createArray + i);
    }
    return createArray;
}

void displayArray(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
  {
    cout<<i<<" "<<*(numbers+i)<<endl;
  }
}

void printSubArrays(int *numbers,int length)
{

 int arr [10];
 int res = 0;
 int k = 0; 
 int s =0 ;
 int secnum = 0;


   for(int i = 0; i < length ; i++)
   {
    
             k=k+s;
             cout<<"{"<<numbers[i]<<"}"<<endl;
             cout<<"{"<<numbers[i];
             secnum = numbers[i];
             s=1;
   
        if(i<length-1)
        { 
           int e = 0;    
          
         for(int j = i+e; j <length ; j++)
         {
             e++;
             k++;
             if (j= length)
             {
                cout<<numbers[j]<<"}"<<endl;
             }
             else
         {

                cout<<","<<numbers[j]

         }
        }
      }





   }

}
