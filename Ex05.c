#include <stdio.h>

void capNhapMang(int *a, int pos, int giaTriMoi, int kichCo)
{
    if (pos >= 0 && pos < kichCo)
    {
        *(a + pos) = giaTriMoi;
    }
    else
    {
        printf("Vi tri %d khong hop le.\n", pos);
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
    int a[] = {3, 5, 7, 9, 10};
    int kichCo = sizeof(a) / sizeof(*a);
    int pos = 2;
    int giaTriMoi = 12;
    printf("Mang ban dau: ");
    xuat(a, kichCo);
    printf("\nMang sau khi cap nhat: ");
    capNhapMang(a, pos, giaTriMoi, kichCo);
    xuat(a, kichCo);
}