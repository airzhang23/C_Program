#include <stdio.h>
int main (void)               /* a simple program to print number 1    */
{
   int num;                  /* define a variable called num */
   num = 1;                  /* assign a value to num        */
   printf("I am a simple "); /* use the printf() function    */
   printf("computer.\n");
   for (int i=0;i<10;i++){
	   printf("number %d\n",i);
   }
   printf("My favorite number is %d because it is first.\n",num);
   return 0;
}
