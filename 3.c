/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float fixo,variavel,final,total;
int main()
{
    printf("salario fixo:");
    scanf("%f",&fixo);
    
    printf("porcentagem");
    scanf("%f",&variavel);
    
    final = variavel/100*fixo;
    total = final+fixo;
    printf("%.2F",total);

    return 0;
}
