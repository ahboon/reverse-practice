#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[12] = "password\0";
    char buff[128];
    int pass = 1;
    printf("Your name: \n");
    gets(buff);
    printf(buff);
    printf("\n");
    return 0;
}