/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float real,dolar;

int main()
{
    printf("digite o valor em dolar:");
    scanf("%f",&dolar);
    
    real=dolar*5;
    
    printf("o valor em real eh:%.2f ",real);
    return 0;
}
