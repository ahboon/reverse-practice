#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char buff[128];
    int pass = 1;
    printf("Your name: \n");
    gets(buff);
    printf(buff);
    printf("\n");
    if(pass >= 1337)
    {
        printf("\nSuccesfully overwritten pass variable\n");
    }
    printf("pass value is: %d",pass);
    return 0;
}
