#include <iostream>
using namespace std;

int main ()
{

int arr[] = {13 , 67 ,2 , 1, 32 , 4 ,31};

for (int i = 0 ; i < 2 ; i++)
{
    for (int j = 0 ; j < 7-1-i ; j++)
    {
        if (arr[j] > arr[j+1])
        {
            arr[j] = arr[j] + arr[j+1];
            arr[j+1] = arr[j] - arr[j+1];
            arr[j] = arr[j] - arr[j+1];
            
        }
    }
}
cout << arr[7-2] << endl;
return 0;
}
