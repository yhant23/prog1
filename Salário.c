#include <stdio.h>

int main ()
{
    float sal_bruto, sal_liq;
    
    printf ("\nEntre com Salario Bruto:");
    
    scanf("%f", &sal_bruto);
    
    if(sal_bruto <=1500)
    
{
    sal_liq = sal_bruto * 0.95;
}

else if ( sal_bruto <=3500)

{
     sal_liq = sal_bruto * 0.9;
}

else

{
    sal_liq = sal_bruto * 0,85;
    
}

    printf("\nSalario Liquido = %f\n", sal_liq);
    
    system("pause");
    
    return 0;
    
} 
