#include <iostream>
using namespace std;


int nonzero_length(int num[], int size)
{
    int counter = 0 ;
    for ( int i  = 0  ; i < size  ; i++)
    {
        if (num[i] !=0)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int x[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int size = sizeof(x) / sizeof(x[0]);
    int n=2;
    while(n!=size*size)
    {
    int counter1 = nonzero_length(x, size);
        for (int j =1; j < size ; j+=n)
        {
            x[j]=0;
        }
    if(counter1 > nonzero_length(x,size))
        break;
    n++;    
    }
    for (int y : x )
    {
        if (y != 0)
            cout << y << " ";
    } 
    cout << "\n These are the lucky numbers";
    return 0;
}
