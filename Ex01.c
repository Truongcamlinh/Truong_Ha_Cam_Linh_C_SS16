#include <stdio.h>

int main()
{
    int number = 5;
    int *ptr = &number;
    printf("In dia chi cua bien cach 1: %d", ptr);
    printf("\nIn dia chi cua bien cach 2: %d", &number);
    printf("\nGia tri cua bien cach 1: %d", number);
    printf("\nGia tri cua bien cach 2: %d", *ptr);
}