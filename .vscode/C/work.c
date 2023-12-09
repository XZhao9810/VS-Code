#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5] = {0};
    int *pi = arr;
    printf("%p\n", arr);
    printf("%p\n", &arr);
    printf("%p\n", pi);
    // return 0;
}