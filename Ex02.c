#include <stdio.h>

void hoanDoi(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b=tmp;
}
int main()
{
    int a = 5, b = 10;
    printf("Truoc khi doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    hoanDoi(&a, &b);
    printf("Sau khi doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}