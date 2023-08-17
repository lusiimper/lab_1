/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    float x,raiz,quad;
    printf("Digite um numero:");
    scanf("%f",&x);
    
    raiz = sqrt (x);
    
    quad = x*x;
    
    printf("a raiz quadrada de %f eh: %f \n",x,raiz);
    printf("%f ao quadrado eh: %f \n",x,quad);
    return 0;
}
