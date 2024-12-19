#include <stdio.h>



void UnidadedeVelocidade();
void Kmh();
void ms();
void mph();
void LimpaTela();


void UnidadedeVelocidade(){
    int opcao = 0;

    do{
    printf("--------------------------------\n");
    printf("    Unidades de Velocidade    \n");
    printf("1 - Km/h\n");
    printf("2 - m/s\n");
    printf("3 - mph\n");
    printf("4 - Finalizar\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao){
        
    case 1:
        Kmh();
        break;
    
    case 2:
        ms();
        break;

    case 3:
        mph();
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


void Kmh(){

    int opcao = 0;
    float velocidade = 0;
    float convertido = 0;

    LimpaTela();
    printf("--------------------------------\n");
    printf("    Km/h para   \n");
    printf("1 - m/s\n");
    printf("2 - mph\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao){

    case 1:
        LimpaTela();
        printf("Digite o valor em Km/h: ");
        scanf("%f",&velocidade);
        convertido = velocidade / 3.6;
        printf("%.2f Km/h e igual a %.2f m/s\n",velocidade, convertido);
        break;

    case 2:
        LimpaTela();
        printf("Digite o valor em Km/h: ");
        scanf("%f",&velocidade);
        convertido = velocidade / 1.609;
        printf("%.2f Km/h e igual a %.2f mph\n", velocidade, convertido);
        break;

    default:
        LimpaTela();
        printf("Opcao invalida!");
        break;
    }
}

void ms(){

    int opcao = 0;
    float velocidade = 0;
    float convertido = 0;

    LimpaTela();
    printf("--------------------------------\n");
    printf("    m/s para   \n");
    printf("1 - Km/h\n");
    printf("2 - mph\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        LimpaTela();
        printf("Digite o valor em m/s: ");
        scanf("%f",&velocidade);
        convertido = velocidade * 3.6;
        printf("%.2f m/s e igual a %.2f Km/h\n", velocidade, convertido);
        break;

    case 2:
        LimpaTela();
        printf("Digite o valor em m/s: ");
        scanf("%f",&velocidade);
        convertido = velocidade * 2.237;
        printf("%.2f m/s e igual a %.2f mph\n", velocidade, convertido);
        break;

    default:
        LimpaTela();
        printf("Opcao invalida!");
        break;
    }
}

void mph(){

    int opcao = 0;
    float velocidade = 0;
    float convertido = 0;

    LimpaTela();
    printf("--------------------------------\n");
    printf("    mph para   \n");
    printf("1 - Km/h\n");
    printf("2 - m/s\n");
    printf("--------------------------------\n");
    printf("Qual opcao deseja: ");
    scanf("%d",&opcao);

    switch (opcao){

    case 1:
        LimpaTela();
        printf("Digite o valor em mph: ");
        scanf("%f",&velocidade);
        convertido = velocidade * 1.609;
        printf("%.2f mph e igual a %.2f Km/h\n", velocidade, convertido);
        break;

    case 2:
        LimpaTela();
        printf("Digite o valor em mph: ");
        scanf("%f",&velocidade);
        convertido = velocidade / 2.237;
        printf("%.2f mph e igual a %.2f m/s\n", velocidade, convertido);
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

/*
int main(){
    UnidadedeVelocidade();
    return 0;
}
*/