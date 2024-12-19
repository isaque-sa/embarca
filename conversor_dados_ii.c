//Programa simples para converter dados entre Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB). 
#include <stdio.h>

#define BIT 1ULL
#define BYTE (8ULL)
#define KB (1024ULL * BYTE)
#define MB (1024ULL * KB)
#define GB (1024ULL * MB)
#define TB (1024ULL * GB)

unsigned long long converterParaBits(int unidade, double valor);
void show_dados();

// Função sem array para converter para bits
unsigned long long converterParaBits(int unidade, double valor) {
    switch (unidade) {
        case 1: return (unsigned long long)(valor * BIT);   // Bits
        case 2: return (unsigned long long)(valor * BYTE);  // Bytes
        case 3: return (unsigned long long)(valor * KB);    // Kilobytes
        case 4: return (unsigned long long)(valor * MB);    // Megabytes
        case 5: return (unsigned long long)(valor * GB);    // Gigabytes
        case 6: return (unsigned long long)(valor * TB);    // Terabytes
        default: return 0;  // Caso inválido
    }
}

void show_dados() {
    int opcao;
    double valor;

    // Menu de seleção
    printf("\n\nEscolha a unidade de entrada:\n");
    printf("1. Bits\n2. Bytes\n3. Kilobytes (KB)\n4. Megabytes (MB)\n5. Gigabytes (GB)\n6. Terabytes (TB)\nOpção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 6) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Entrada do valor
    printf("Digite o valor: ");
    scanf("%lf", &valor);

    // Conversão para bits
    unsigned long long totalBits = converterParaBits(opcao, valor);

    // Exibição das conversões
    printf("\nConversões:\n");
    printf("Bits: %llu\n", totalBits);
    printf("Bytes: %.2f\n", totalBits / (double)BYTE);
    printf("Kilobytes (KB): %.6f\n", totalBits / (double)KB);
    printf("Megabytes (MB): %.9f\n", totalBits / (double)MB);
    printf("Gigabytes (GB): %.12f\n", totalBits / (double)GB);
    printf("Terabytes (TB): %.15f\n", totalBits / (double)TB);
}
