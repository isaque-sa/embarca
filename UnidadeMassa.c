#include <stdio.h>
#include <string.h>
#include <ctype.h>

//const int MAX = 5;

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
/*
int main() {
    float valor;
    char unidade[MAX];

    printf("Conversao de unidades de massa (kg, g, t):\n");
    printf("Insira o valor:\n");
    scanf("%f", &valor);

    printf("Insira a unidade (kg, g, t):\n");
    scanf("%4s", unidade);

    // Normalizar a unidade para letras minúsculas
    for (int i = 0; unidade[i]; i++) {
        unidade[i] = tolower(unidade[i]);
    }

    converter_massa(valor, unidade);

    return 0;
}
*/