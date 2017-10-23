#include <stdio.h>

// Faça um pograma para ler um nome e escreve-lô na ordem reversa

int main ()



{
         char nome [20];
         int i, j=0, tam, palindromo=1;
         
    printf("\nEntre com um nome:");
    scanf("%s", nome);
    
    tam = strlen(nome);
    
    printf("\nO nome na ordem reversa:");
    
    for (i=tam-1; i>=0; i--) // Imprime na ordem reversa
    
    
    {
        printf("%c", nome [i]); // Imprime caracter a caracter
        
        if(nome[i] != nome[j])
    {
        palindromo =0;  // Caracter espelhado é diferente
   
    } 
     j++;  
}

        if(palindromo)
    {           
        printf("\nEsta palavra e um palindromo");
}

 else   
    {
         printf("\nEsta palavra nao e um palindromo"); 
         }       
              
        
        printf("\n\n");
         
}
        
system("pause");

return 0;

}
    
    
    
