/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    
    float x1,x2,y1,y2,raiz,quad1,quad2,quad3;
    
    printf("x1:\n");
    scanf("%f",&x1);
    
    printf("x2:\n");
    scanf("%f",&x2);

    printf("y1:\n");
    scanf("%f",&y1);
    
    printf("y2:\n");
    scanf("%f",&y2);
    
    quad1=x1*x1-x2*x2;
    quad2=y1*y1-y2*y2;
    quad3=quad1+quad2;
    raiz=sqrt(quad3);
     
     printf("%.3f",raiz);
     
    return 0;
}

