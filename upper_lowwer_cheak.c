#include<stdio.h>
 int main ()
 {
  char ch;

   printf ("entter the letter : ");
   scanf ("%c", &ch);  
   if (ch>='A' && ch<='Z')
   {
    printf ("the letter is upper case ");
   }
   else if (ch>='a' && ch<='z')
   {
    printf ("the letter is lower case");
   }
   else
   {
    printf ("the letter is not a alphabet");
   }
 
  return 0;
  


 }