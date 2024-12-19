#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned char escolha;
    
    printf("\nEscolha a unidade a ser convertida\n\n");
    printf("1 - Digite 1 para unidade de comprimento\n");
    printf("2 - Digite 2 para unidade de massa\n");
    printf("3 - Digite 3 para unidade de volume\n");
    printf("4 - Digite 4 para unidade de temperatura\n");
    printf("5 - Digite 5 para unidade de velocidade\n");
    printf("6 - Digite 6 para unidade de potencia\n");
    printf("7 - Digite 7 para unidade de area\n");
    printf("8 - Digite 8 para unidade de tempo\n");
    printf("9 - Digite 9 para unidade de byte\n");

    do{
        scanf("%hd",&escolha);
        if(escolha < 1 || escolha > 9)
            printf("Escolha icorreta, digite novamente\n");
    }while(escolha < 1 || escolha > 9);
    
    switch(escolha){
        case 1:
        // Função para calcular e mostrar os comprimentos convertidos
        break;
        case 2:
        // Função para calcular e mostrar as massas convertidas
        break;
        case 3:
        // Função para calcular e mostrar os volumes convertidos
        show_voluma();
        break;
        case 4:
        // Função para calcular e mostrar as temperaturas convertidas
        UnidadedeTemperatura();
        break;
        case 5:
        // Função para calcular e mostrar as velocidades convertidas
        UnidadedeVelocidade();
        break;
        case 6:
        // Função para calcular e mostrar as potencias convertidas
        break;
        case 7:
        // Função para calcular e mostrar as areas convertidas
        break;
        case 8:
        // Função para calcular e mostrar os tempos convertidos
        break;
        case 9:
        // Função para calcular e mostrar os bytes convertidos
        break;
    }

    return 0;
}
