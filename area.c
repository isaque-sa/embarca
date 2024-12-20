#include <stdio.h>

void area();
void metrosParaCentimetros(float metros);
void centimetrosParaMetros(float centimetros);

void metrosParaCentimetros(float metros) {
    float centimetros = metros * 10000; // 1 m² = 10.000 cm²
    printf("%.2f metros quadrados equivalem a %.2f centímetros quadrados.\n", metros, centimetros);
}

void centimetrosParaMetros(float centimetros) {
    float metros = centimetros / 10000; // 1 cm² = 0,0001 m²
    printf("%.2f centímetros quadrados equivalem a %.2f metros quadrados.\n", centimetros, metros);
}

void area() {
    int opcao;
    float valor;

    printf("=== Conversor de Área ===\n");
    printf("Escolha a direção da conversão:\n");
    printf("1. Metros quadrados (m²) para Centímetros quadrados (cm²)\n");
    printf("2. Centímetros quadrados (cm²) para Metros quadrados (m²)\n");
    printf("Digite sua opção (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em metros quadrados (m²): ");
        scanf("%f", &valor);
        metrosParaCentimetros(valor);
    } else if (opcao == 2) {
        printf("Digite o valor em centímetros quadrados (cm²): ");
        scanf("%f", &valor);
        centimetrosParaMetros(valor);
    } else {
        printf("Opção inválida. Tente novamente.\n");
    }

}

// outras ainda serão executas