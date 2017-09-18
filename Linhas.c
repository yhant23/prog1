#include <stdio.h>
 /*
 Aluno: Yhan
 Prof: Alex
 UnilasalleRJ
 */
 
int main()
{
   int n;
   int i;
   
 // ler um numero positivo 
 
 do
{
    printf("\nEntre com um numero N:");
    scanf("%d", &n);
}
 while(n<=0);
 
 // mostrar as linhas numeradas
 
    for(i=1; i<=n ; i++)
 
{
    printf("\nEsta e a linha %d\n\n", i);
   
}        
 
 
   
    system("pause");
   
return 0;
}
