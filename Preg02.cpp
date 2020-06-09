#include <stdio.h>
#define N 100
 
int main( void )
{
   int i, n;
   char digitos[N];
   printf( "Escribe un numero: ", N );
   fflush( stdout );
   scanf ("%s",digitos);
   
   for (n=0;digitos[n]!='\0';n++);
  
   for (i=0;i<n;i++)
    printf ("%3c",digitos[i]);
   return 0;
}

