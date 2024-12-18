#include <stdio.h>



void UnidadedeTemperatura();
void Celsius();
void Fahrenheit();
void Kelvin();
void LimpaTela();


void UnidadedeTemperatura(){
    int opcao = 0;

    do{
    printf("--------------------------------\n");
    printf("    Unidades de temperatura     \n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit\n");
    printf("3 - Kelvin\n");
    printf("4 - Finalizar\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao){
        
    case 1:
        Celsius();
        break;
    
    case 2:
        Fahrenheit();
        break;

    case 3:
        Kelvin();
        break;
    
    case 4:
        printf("Finalizando!"); 
        break;

    default:
        printf("Opcao invalida!");
        break;
    }

    }while(opcao != 4);
}


void Celsius(){

    int opcao = 0;
    float temperatura = 0;
    float convertido = 0;

    LimpaTela();
    printf("--------------------------------\n");
    printf("    Celsius para   \n");
    printf("1 - Fahrenheit\n");
    printf("2 - Kelvin\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao){

    case 1:
        LimpaTela();
        printf("Digite o valor em Celsius: ");
        scanf("%f",&temperatura);
        convertido = (temperatura * 9/5) + 32;
        printf("%.2f C e igual a %.2f F\n", temperatura, convertido);
        break;

    case 2:
        LimpaTela();
        printf("Digite o valor em Celsius: ");
        scanf("%f",&temperatura);
        convertido = temperatura + 273.15;
        printf("%.2f C e igual a %.2f K\n", temperatura, convertido);
        break;

    default:
        LimpaTela();
        printf("Opcao invalida!");
        break;
    }
}

void Fahrenheit(){

    int opcao = 0;
    float temperatura = 0;
    float convertido = 0;

    LimpaTela();
    printf("--------------------------------\n");
    printf("    Fahrenheit para   \n");
    printf("1 - Celsius\n");
    printf("2 - Kelvin\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        LimpaTela();
        printf("Digite o valor em Fahrenheit: ");
        scanf("%f",&temperatura);
        convertido = (temperatura - 32) * 5/9;
        printf("%.2f F e igual a %.2f C\n", temperatura, convertido);
        break;

    case 2:
        LimpaTela();
        printf("Digite o valor em Fahrenheit: ");
        scanf("%f",&temperatura);
        convertido = (temperatura - 32) * 5/9 + 273.15;
        printf("%.2f F e igual a %.2f K\n", temperatura, convertido);
        break;

    default:
        LimpaTela();
        printf("Opcao invalida!");
        break;
    }
}

void Kelvin(){

    int opcao = 0;
    float temperatura = 0;
    float convertido = 0;

    LimpaTela();
    printf("--------------------------------\n");
    printf("    Kelvin para   \n");
    printf("1 - Celsius\n");
    printf("2 - Fahrenheit\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao){

    case 1:
        LimpaTela();
        printf("Digite o valor em Kelvin: ");
        scanf("%f",&temperatura);
        convertido = temperatura - 273.15;
        printf("%.2f K e igual a %.2f C\n", temperatura, convertido);
        break;

    case 2:
        LimpaTela();
        printf("Digite o valor em Kelvin: ");
        scanf("%f",&temperatura);
        convertido = (temperatura - 273.15) * 9/5 + 32;
        printf("%.2f K e igual a %.2f F\n", temperatura, convertido);
        break;

    default:
        LimpaTela();
        printf("Opcao invalida!");
        break;
    }
}


void LimpaTela() {
    for (int i = 0; i < 30; i++) {
        printf("\n");
    }
}


int main(){
    UnidadedeTemperatura();
    return 0;
}