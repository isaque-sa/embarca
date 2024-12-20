#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converter_volume(float valor, char unidade[]);
void show_voluma();


void converter_volume(float valor, char unidade[]) {
    if (!strcmp(unidade, "l")) {
        printf("Valor em mililitros: %.6f mL\n", valor * 1000);
        printf("Valor em metros cubicos: %.6f m3\n", valor / 1000);
    } else if (!strcmp(unidade, "ml")) {
        printf("Valor em litros: %.6f L\n", valor / 1000);
        printf("Valor em metros cubicos: %.6f m3\n", valor / 1000000);
    } else if (!strcmp(unidade, "m3")) {
        printf("Valor em litros: %.6f L\n", valor * 1000);
        printf("Valor em mililitros: %.6f mL\n", valor * 1000000);
    } else {
        printf("Unidade invalida. Use 'L', 'mL' ou 'm3'.\n");
    }
}

void show_voluma() {
    const int MAX = 5;
    float valor;
    char unidade[MAX];

    printf("Conversao de unidades de volume (L, mL, m3):\n");

    printf("\nInsira a unidade (L, mL, m3):\n");
    scanf("%4s", unidade);
    printf("Insira o valor:\n");
    scanf("%f", &valor);

    // Normalizar a unidade para letras minúsculas
    for (int i = 0; unidade[i]; i++) {
        unidade[i] = tolower(unidade[i]);
    }

    converter_volume(valor, unidade);

}
