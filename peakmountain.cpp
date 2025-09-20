#include <iostream>
using namespace std;

int main()
{
  int a[] = {1,3,5,7,6,4,2};
  for (int i=0 ; i< (sizeof(a) / sizeof(a[0])) -1 ; i++)
    {
    if ((a[i] - a[i+1]) > 0)
    {
      cout  << i;
      return 0;
    }

    }
  return 0;
}
