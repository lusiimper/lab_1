/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float cambio,real,dolar;

int main()
{
    printf("digite o valor em dolar:");
    scanf("%f",&dolar);
    
    printf("digite o valor de cambio :");
    scanf("%f",&real);
    
    cambio=dolar*real;
    
    
    printf("o valor em real eh:%.2f ",cambio);
    
    return 0;
}

