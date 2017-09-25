/**************************************************** 

* Trab 2 : Numeros Primos 

* Nome : Yhan Teixeira * Matrícula : 0050015012

* Professor: Alex Salgado 

*****************************************************/ 


#include <stdio.h> 

#include <stdlib.h> 


int main() 

{ 

/* Entrando com as variaveis */ 


int restoNum = 0; 

int x; 

int numeroP; 

int resp = 1; 

{ 

printf("Ola, meu nome eh Yhan Teixeira e vou calcular numeros primos\n"); 

} 

/* Faça enquanto resposta igual a 1 */ 


do 

{ 


/* Faça enquanto numero digitado for negativo*/ 


do 

{ 


/* Faça enquanto numero digitado for inteiro*/ 


do 

{ 


printf("Digite um numero inteiro e positivo: "); 

scanf("%d", &numeroP); 

} while (numeroP<=0); 


/*identificando se o numero digitado é divisivel apenas por ele mesmo e pela unidade 

caso aconteça restoNum sera superior a 2*/ 


for (x = 1; x <= numeroP; x++) 

{ 

if (numeroP % x == 0) 

{ 

restoNum++; 


} 

} 


if (restoNum == 2) 

printf("%d eh numero primo \n", numeroP); 

else 

printf("%d nao eh numero primo\n", numeroP); 



} while (numeroP<=1); 





printf("Deseja continuar (1-Sim/2-Nao) ?\n"); 

scanf("%d", &resp); 




} while(resp==1); 


{ 

printf("Obrigado, ate a proxima! Para ver o meu codigo entre no link "); 

} 

 system("pause");


return 0; 

}
