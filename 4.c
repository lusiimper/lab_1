/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int qtd1,qtd2,qtd3;
    float vu1,vu2,vu3,t1,t2,t3,tg;
    
    printf("digite a quantidade do material 1:\n");
    scanf("%d",&qtd1);
    
    printf("digite o valor unitario do material 1 :\n");
    scanf("%f",&vu1);
    
    printf("digite a quantidade do material 2:\n");
    scanf("%d",&qtd2);
    
    printf("digite o valor unitario do material 2 :\n");
    scanf("%f",&vu2);
    
    printf("digite a quantidade do material 3:\n");
    scanf("%d",&qtd3);
    
    printf("digite o valor unitario do material 3:\n");
    scanf("%f",&vu3);
    
    
    t1 = vu1*qtd1;
    t2 = vu2*qtd2;
    t3 = vu3*qtd3;
    tg=t1+t2+t3;
    
    printf("+-----------------------------------+\n");
    printf("|material  | qtd |valor unit| total |\n");
    printf("|material 1| %4d|%10.2f|%7.2f|\n",qtd1,vu1,t1);
    printf("|material 2| %4d|%10.2f|%7.2f|\n",qtd2,vu2,t2);
    printf("|material 3| %4d|%10.2f|%7.2f|\n",qtd3,vu3,t3);
    printf("+-----------------------------------+\n");
    printf("|total geral:%23.2f+\n",tg);
    printf("+-----------------------------------+");
    return 0;
}

