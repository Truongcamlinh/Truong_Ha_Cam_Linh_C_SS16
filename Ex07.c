#include <stdio.h>

void insertionSort(int *a, int kichCo)
{
    for (int i = 0; i < kichCo; ++i)
    {
        int tmp = *(a + i), j = i - 1;
        while (j >= 0 && *(a + j) > tmp)
        {
            *(a + j + 1) = *(a + j);
            --j;
        }
        *(a + j + 1) = tmp;
    }
}
void xuat(int *a, int kichCo)
{
    for (int i = 0; i < kichCo; ++i)
    {
        printf("%d ", *(a + i));
    }
}
int main()
{
    int a[] = {3, 2, 5, 1, 10, 40, 22, 11};
    int kichCo = sizeof(a) / sizeof(*a);
    insertionSort(a, kichCo);
    xuat(a, kichCo);
}