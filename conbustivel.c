#include <stdio.h>
#include <stdlib.h>

/**protótipo da funçao*/
int Calculo(float vGas, float vEta);

int main() 
{   
    
    printf("Qual conbustivel usar\n");

    /**Variaveis */
    float precoGasol, precoEtanol;

    /**Valor da Gaslina*/
    printf("Qual preço da gasolina?\n");
    scanf("%f", &precoGasol);

    /**Valor da Etanol*/
    printf("Qual preço do Etanol\n");
    scanf("%f", &precoEtanol);
     

    /**Variavel resultado*/
    int resultado = Calculo(precoGasol, precoEtanol);
    
    if(resultado == 0)
    {
        printf("Compensa abastecer com Gasolina\n");
        system("color c7");  
    } 
    
    else if(resultado == 1)
    {
        printf("Compensa abastecer com Etanol\n");
        system("color a0");
    }
    else
    {
        printf("Sa Equifalentes, tanto faz.\n");
    }

    system("pause");

    return 0;


}

/**Calculando valores dos combustiveis*/
int Calculo(float vGas, float vEta)
{ 
     if((vGas * 0.70) < vEta)
     {
        return 0;
     } 
     else if ((vGas * 0.70) > vEta)
    {
        return 1;
    }
    else 
    {
        return 2;
    }
}