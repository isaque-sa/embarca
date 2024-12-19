#include <stdio.h>

void potencia();

void potencia() {
    int opcao;
    float valor, resultado;

    printf("\n\n=== Conversor de Potência ===\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1. Watts (W) para Quilowatts (kW) e Cavalos-vapor (cv)\n");
    printf("2. Quilowatts (kW) para Watts (W) e Cavalos-vapor (cv)\n");
    printf("3. Cavalos-vapor (cv) para Watts (W) e Quilowatts (kW)\n");
    printf("Digite sua opção (1, 2 ou 3): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Watts para outras unidades
        printf("Digite o valor em Watts (W): ");
        scanf("%f", &valor);
        resultado = valor / 1000; // Converte para kW
        printf("%.2f Watts (W) equivalem a %.4f Quilowatts (kW).\n", valor, resultado);
        resultado = valor / 735.49875; // Converte para cv
        printf("%.2f Watts (W) equivalem a %.4f Cavalos-vapor (cv).\n", valor, resultado);
    } else if (opcao == 2) {
        // Quilowatts para outras unidades
        printf("Digite o valor em Quilowatts (kW): ");
        scanf("%f", &valor);
        resultado = valor * 1000; // Converte para W
        printf("%.2f Quilowatts (kW) equivalem a %.2f Watts (W).\n", valor, resultado);
        resultado = (valor * 1000) / 735.49875; // Converte para cv
        printf("%.2f Quilowatts (kW) equivalem a %.4f Cavalos-vapor (cv).\n", valor, resultado);
    } else if (opcao == 3) {
        // Cavalos-vapor para outras unidades
        printf("Digite o valor em Cavalos-vapor (cv): ");
        scanf("%f", &valor);
        resultado = valor * 735.49875; // Converte para W
        printf("%.2f Cavalos-vapor (cv) equivalem a %.2f Watts (W).\n", valor, resultado);
        resultado = (valor * 735.49875) / 1000; // Converte para kW
        printf("%.2f Cavalos-vapor (cv) equivalem a %.4f Quilowatts (kW).\n", valor, resultado);
    } else {
        printf("Opção inválida. Tente novamente.\n");
    }

}

// outras conversãoes ainda serão executadas 