#include <iostream>
#include <stdio.h>

void ShowByte(unsigned char* data)
{
    for (int i = 0; i < 8; i++)
    {
        if ((*data) & (0x80 >> i)) printf("1");
        else printf("0");
    }
}

void ShowByte2(unsigned char* data)
{
    for (int i = 8; i > 0; i--)
    {
        if ((*data) & (0x01 << i - 1)) printf("1");
        else printf("0");
    }
}

int main()
{
    int x = 11;

    printf("int");
    printf("\nBig-Endian: ");
    ShowByte(((unsigned char*)&x) + 3);
    ShowByte(((unsigned char*)&x) + 2);
    ShowByte(((unsigned char*)&x) + 1);
    ShowByte(((unsigned char*)&x) + 0);

    printf("\nLittle-Endian: ");
    ShowByte2(((unsigned char*)&x) + 0);
    ShowByte2(((unsigned char*)&x) + 1);
    ShowByte2(((unsigned char*)&x) + 2);
    ShowByte2(((unsigned char*)&x) + 3);

    float f = 11;

    printf("\n\nfloat");
    printf("\nBig-Endian: ");
    ShowByte(((unsigned char*)&f) + 3);
    ShowByte(((unsigned char*)&f) + 2);
    ShowByte(((unsigned char*)&f) + 1);
    ShowByte(((unsigned char*)&f) + 0);

    printf("\nLittle-Endian: ");
    ShowByte2(((unsigned char*)&f) + 0);
    ShowByte2(((unsigned char*)&f) + 1);
    ShowByte2(((unsigned char*)&f) + 2);
    ShowByte2(((unsigned char*)&f) + 3);

    double d = 11;

    printf("\n\ndouble");
    printf("\nBig-Endian: ");
    ShowByte(((unsigned char*)&d) + 7);
    ShowByte(((unsigned char*)&d) + 6);
    ShowByte(((unsigned char*)&d) + 5);
    ShowByte(((unsigned char*)&d) + 4);
    ShowByte(((unsigned char*)&d) + 3);
    ShowByte(((unsigned char*)&d) + 2);
    ShowByte(((unsigned char*)&d) + 1);
    ShowByte(((unsigned char*)&d) + 0);

    printf("\nLittle-Endian: ");
    ShowByte2(((unsigned char*)&d) + 0);
    ShowByte2(((unsigned char*)&d) + 1);
    ShowByte2(((unsigned char*)&d) + 2);
    ShowByte2(((unsigned char*)&d) + 3);
    ShowByte2(((unsigned char*)&d) + 4);
    ShowByte2(((unsigned char*)&d) + 5);
    ShowByte2(((unsigned char*)&d) + 6);
    ShowByte2(((unsigned char*)&d) + 7);
}