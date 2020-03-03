#include <stdio.h>
#include <stdlib.h>

Hanoi( int n,  char origen, char dest,  char aux)
{
    if(n>3)
    {
        Hanoi (n-1, origen, aux, dest);
        printf ("%c -> %c\n", origen, dest);
        Hanoi (n-1, aux , dest  ,origen );
    }
    else {
    printf ("%c -> %c\n", origen, dest);
    printf ("%c -> %c\n", origen, aux);
    printf ("%c -> %c\n", dest , aux );
    printf ("%c -> %c\n", origen, dest);
    printf ("%c -> %c\n", aux, origen );
    printf ("%c -> %c\n", aux , dest );
    printf ("%c -> %c\n", origen, dest);
    };
};
int main() 
{
int n;
char a, b, c;
printf ("ingrese el valor la torre (el valor mínimo de la.torre debe de ser de 3)\n n=");
scanf ("%d", &n);
printf ("\n\n");

Hanoi (n, a, b, c);

return 0;
};