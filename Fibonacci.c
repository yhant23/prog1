#include <stdio.h>

int main ()

{

int i, n, ant, pos, fibo;
ant = 0;
pos = 1;

    printf("\nEntre com o termo n:");
    scanf("%d", &n);
    
    printf("\nSequencia = ");
    
    if(n>=1)
{   
    printf("0,");
}
     if(n >= 2)
{
    printf("1, ");    
}
     
    
    for( i = 3; i <= n; i++)
    
{
    fibo = ant + pos;
    
    printf("%d,", fibo);
    
    ant = pos;
    pos = fibo;

}

system("pause");

return 0;

}
         



    
