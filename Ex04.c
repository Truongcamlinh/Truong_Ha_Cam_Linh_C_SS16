#include <stdio.h>

void xuat(int *a, int kichCo)
{
    for (int i = 0; i < kichCo; ++i)
    {
        printf("%d ", *(a + i));
    }
}
int main()
{
    int a[] = {3, 5, 7, 9, 10};
    int kichCo = sizeof(a) / sizeof(a[0]);
    xuat(a, kichCo);
}