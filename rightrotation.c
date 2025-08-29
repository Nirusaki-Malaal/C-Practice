#include <stdio.h>

void main() {
    int num[] = {1,2,3,4};
    int k =2 ;
    
    for (int i = 0 ; i<4-k; i++)
    {
        int temp = num[4-1-i];
        num[4-1-i]=num[4-1-i-k];
        num[4-1-i-k]=temp;
    }
    for (int i = 0 ; i<4 ; i++)
    {
        printf("%d ", num[i]);
    }
}
