#include <stdio.h>
#include <string.h>

int main()
{
   int i, length;
   char str[100];
   scanf("%s", str);
   length = strlen(str);
   for(i = length - 1; i >= 0; i--){
      printf("%c", str[i]);
   }
   printf("\n");
   return 0;
}

