#include <stdio.h>

void found(int *a, int kichCo, int *pos, int giaTriMoi)
{
    for (int i = 0; i < kichCo;++i)
    {
        if(*(a+i)==giaTriMoi)
            *pos = i;
    }
}
int main()
{
    int a[] = {3, 5, 7, 9, 10};
    int kichCo = sizeof(a) / sizeof(*a);

    int pos, giaTriMoi = 7;
    found(a, kichCo, &pos, giaTriMoi);
    printf("%d", pos);
}