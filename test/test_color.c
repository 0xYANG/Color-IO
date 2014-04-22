#include <stdio.h>

int main (int argc, char* argv[])
{
    printf("%20s", "\e[31mRed\n");
    printf("%20s", "\e[32mGreen\n");
    printf("%20s", "\e[33mYellow\n");
    printf("%20s", "\e[34mBlue\n");
    printf("%20s", "\e[00mDefault\n");

    return 0;
}
