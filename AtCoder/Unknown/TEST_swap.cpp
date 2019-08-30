#include <stdio.h>
#include <iostream>
#define SWAP(a, b) ((a != b) && (a += b, b = a - b, a -= b))
#define SWAP(a, b) ((a != b) ? (a += b, b = a - b, a -= b) : 0)
#define SWAP(a, b) (a ^= b, b = a ^ b, a ^= b)

using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    cout << a << endl;
    cout << *a << endl;
    a = b;
    *b = temp;
    return;
}

int main(void)
{
    int a = 10, b = 100;
    printf("a = %3d : b = %3d\n", a, b);
    swap(&a, &b);
    printf("a = %3d : b = %3d\n", a, b);
    return 0;
}
