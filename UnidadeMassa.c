#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converter_massa(float valor, char unidade[]);
void show_massa();

void converter_massa(float valor, char unidade[]) {
    if (!strcmp(unidade, "kg")) {
        printf("Valor em gramas: %.6f g\n", valor * 1000);
        printf("Valor em toneladas: %.6f t\n", valor / 1000);
    } else if (!strcmp(unidade, "g")) {
        printf("Valor em quilogramas: %.6f kg\n", valor / 1000);
        printf("Valor em toneladas: %.6f t\n", valor / 1000000);
    } else if (!strcmp(unidade, "t")) {
        printf("Valor em quilogramas: %.6f kg\n", valor * 1000);
        printf("Valor em gramas: %.6f g\n", valor * 1000000);
    } else {
        printf("Unidade inválida. Use 'kg', 'g' ou 't'.\n");
    }
}

void show_massa() {
    const int MAX = 5;
    float valor;
    char unidade[MAX];

    printf("Conversao de unidades de massa (kg, g, t):\n");

    printf("\nInsira a unidade (kg, g, t):\n");
    scanf("%4s", unidade);
    printf("Insira o valor:\n");
    scanf("%f", &valor);

    // Normalizar a unidade para letras minúsculas
    for (int i = 0; unidade[i]; i++) {
        unidade[i] = tolower(unidade[i]);
    }

    converter_massa(valor, unidade);

}
