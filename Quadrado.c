/*
Quadrado - Escrever um programa que mostre a seguinte figura no alto da tela.
XXXXX
x   x 
x   x
x   x

*/

#include <stdio.h>

int main ()

{
    int linhas, i;  
    
    linhas = 5;
    
    for(i=1; i<=linhas; i++)
{
    if( (i == 1) || (i == linhas) )
{    
    printf("\nXXXXX");
}

else

{
    printf("\nX   X"); 
}       
   
}

    printf("\n");
    
    system("pause");
    
}
