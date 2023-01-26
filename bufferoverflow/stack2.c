#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char buff[16];
    int pass = 0;
    char type = 'C';
    printf("Your name: \n");
    gets(buff);
    printf("Hello: %s\n",buff);
    printf("Your type is: %c\n",type);
    if(pass)
    {
        printf("Buffer Overflow Success \n");
    }

    return 0;
}