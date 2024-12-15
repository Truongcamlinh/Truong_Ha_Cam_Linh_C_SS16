#include <stdio.h>
#include <string.h>

void reversesString(char *inputString, char *reverseString)
{
    int kichCo = strlen(inputString);
    for (int i = 0; i < kichCo; ++i)
    {
        *(reverseString + i) = *(inputString + kichCo - i - 1);
    }
    *(reverseString + kichCo) = '\0';
}
int main()
{
    char inputString[100], reverseString[100];
    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    reversesString(inputString, reverseString);
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s", reverseString);
}