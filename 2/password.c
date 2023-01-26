#include <stdio.h>
#include <string.h>
int main() {
   // printf() displays the string inside quotation
   char input[100];
   char passwordghi[100] = "abcdefghijklmnopqrstuvwxyz\0";
   char passwordabc[100] = "pazzword\0";
   char passworddef[100] = "password\0";
   char password[100] = "pazzw0rdz\0";
   char passwordjkl[100] = "abcdefghijklmnopqrstuvwxyz\0";
   int val;
   printf("Enter the pasword: ");  
   if(fgets (input, 100, stdin) != NULL)
   {
    
   }
   val = strcmp(password,input);
   if(val == 0)
   {
    printf("that flag is: %s",password);
   } else
   {
    printf("Wrong password\n");
   }
   
   return 0;
}