#include <stdio.h>
#include <string.h>

int main()
{  
   int i;
   char str[100];
   scanf("%s", str);
   for(i = 0; i < strlen(str); i++){
      printf("%c\n", str[i]);
   }
   return 0;
}
