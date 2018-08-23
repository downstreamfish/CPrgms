/* Test setjmp / longjmp */
#include <setjmp.h>
#include <stdio.h>

static jmp_buf env;
void f1(void);
void f2(void);

int main()
{
   int ret;
   ret = setjmp(env);
   printf("setjmp return %d\n", ret);
   if(ret != 0){
      printf("Program terminates: longjmp called\n");
      return 0;
   }
   f1();
   printf("Program terminates normally\n");
   return 0;
}

void f1(void)
{
   printf("f1 begains\n");
   f2();
   printf("f1 returns\n");
}
void f2(void)
{
   printf("f2 begains\n");
   longjmp(env, 1);
   printf("f2 returns\n");
}
