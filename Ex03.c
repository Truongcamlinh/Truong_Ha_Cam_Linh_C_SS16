#include <stdio.h>

void tinhTong(int *a, int *b, int *ketqua)
{
    *ketqua = *a + *b;
}
int main()
{
    int a = 12, b = 3, ketqua;
    tinhTong(&a, &b, &ketqua);
    printf("%d", ketqua);
}