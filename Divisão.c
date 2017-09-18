#include <stdio.h>

int main ()

{
    int num;
    int resto;
    
    printf("\nEntre com um numero:");
    scanf("%d",&num);
    
    resto = num % 2;
    
    if(resto==1)
{
    printf("\nEste numero e impar");
}
    else
{
    printf("\nEste numero e par");
}
    system("pause");
    return 0;
}
    
