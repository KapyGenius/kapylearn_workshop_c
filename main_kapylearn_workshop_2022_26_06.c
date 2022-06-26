/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void traceladroite(int x1, int y1, int x2, int y2);
void resoudsequation(int p, int q);

int main()
{
    int x1, x2, y1, y2;
    printf("Hello World With KapyLearn \n");
    printf("entrer le premier point x1 y1:");
    scanf("%d %d", &x1, &y1);
    printf("entrer le deuxiemme point x2 y2:");
    scanf("%d %d", &x2, &y2);
    
    
    traceladroite(x1, y1, x2, y2);
    
    return 0;
}

//trace une droite à partir de deux points (x1,y1) et (x2,y2) => y = m*x + b
// m = (y2-y1)/(x2-x1), b = y1 - m*x1
void traceladroite(int x1, int y1, int x2, int y2) {
    double m = 0.0; double b = 0.0;
    m = (y2 - y1 + 0.0) / (x2 - x1);
    b = y1 - m * x1;
    printf("l'équation est: y = %.2f * x + %.2f ", m, b);
}

// écrire une fonction qui résouds une équation x^2 + px + q = 0
void resoudsequation(int p, int q) {
    double x1=0.0, x2=0.0;
    //ton code
    
    
    printf("x1 est %.2f et x2 est %.2f", x1, x2);
}


