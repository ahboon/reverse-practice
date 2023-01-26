#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char buff[16];
    int pass = 0;
    printf("Your name: \n");
    gets(buff);
    printf("Hello: %s\n",buff);
    if(pass)
    {
        printf("Buffer Overflow Success \n");
    }

    return 0;
}