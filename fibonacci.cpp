#include <iostream>
using namespace std;
int main() {
    int prev = 0;
    int next =1 ;
    int length;
    cout << "Enter Length of the Series ";
    cin >> length;
    if (length==1)
    {
        cout << 0;
    }
    else if (length == 2)
    {
        cout << prev << " " << next << " ";
    }
    else
    {
    cout << prev << " " << next << " ";
    for (int i =1 ; i<length-1; i++)
    {
        int sum = prev + next ;
        prev = next;
        next = sum;
        cout << next << " ";
    }
    }
}
