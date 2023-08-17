/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float gra,rad;
    
    printf("Digite o angulo em graus:");
    scanf("%f",&gra);
    
    rad =gra*3,14/180;
    
    printf("%f graus = %fradiano",gra,rad);
    
  
    return 0;
}
