// #include <stdio.h>
// #include <stdlib.h>

// void abc(int a)
// {

// }

// void main()
// {
//     // int arr[5] = {0};
//     // int *pi = arr;
//     // printf("%p\n", arr);
//     // printf("%p\n", &arr);
//     // printf("%p\n", pi);
//     int a = 10, b = 20;
//     abc(a,b);
//     // return 0;
// }

#include <stdio.h>

int *compare_and_return(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a = 5, b = 10;
    int *result = compare_and_return(&a, &b);
    printf("The larger value is %d\n", *result);
    return 0;
}