#include <stdio.h>

void main() {
    int num[] = {1,2,3,4};
    int k =1;
    
    for (int i = 0 ; i<4-k; i++)
    {
        int temp = num[i];
        num[i]=num[i+k];
        num[i+k]=temp;
    }
    for (int i = 0 ; i<4 ; i++)
    {
        printf("%d ", num[i]);
    }
}
