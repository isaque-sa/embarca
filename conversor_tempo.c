//Programa simples para converter unidades de tempo ( segundos, minutos, horas )
#include <stdio.h>

void converter_de_segundos(double segundos);
void show_time();

void converter_de_segundos(double segundos) {
    double minutos = segundos / 60;
    double horas = minutos / 60;
    printf("%.2f segundos é igual a %.2f minutos ou %.2f horas.\n", segundos, minutos, horas);
}

void converter_de_minutos(double minutos) {
    double segundos = minutos * 60;
    double horas = minutos / 60;
    printf("%.2f minutos é igual a %.2f segundos ou %.2f horas.\n", minutos, segundos, horas);
}

void converter_de_horas(double horas) {
    double segundos = horas * 3600;
    double minutos = horas * 60;
    printf("%.2f horas é igual a %.2f segundos ou %.2f minutos.\n", horas, segundos, minutos);
}

void show_time() {
    int opcao;
    double valor;

    printf("Escolha a unidade de tempo que deseja converter:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
    printf("0. Sair\n");

    while (1) {
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);

        switch (opcao) {
            case 1:
                converter_de_segundos(valor);
                break;
            case 2:
                converter_de_minutos(valor);
                break;
            case 3:
                converter_de_horas(valor);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

}
