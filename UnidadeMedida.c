#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX = 3;

int main() {
    float f;
    char s[MAX];
    
    printf("Insira um valor:\n");
    scanf("%f", &f);
    
    printf("Qual a unidade? (m/cm/mm)\n");
    scanf("%2s", s);
    
    // Normalizar a entrada para letras minúsculas
    for (int i = 0; s[i]; i++) {
        s[i] = tolower(s[i]);
    }
    
    if (!strcmp(s, "m")) {
        printf("Valor em cm: %.6f cm\n", f * 100);
        printf("Valor em mm: %.6f mm\n", f * 1000);
    } 
    else if (!strcmp(s, "cm")) {
        printf("Valor em m: %.6f m\n", f / 100);
        printf("Valor em mm: %.6f mm\n", f * 10);
    } 
    else if (!strcmp(s, "mm")) {
        printf("Valor em m: %.6f m\n", f / 1000);
        printf("Valor em cm: %.6f cm\n", f / 10);
    } 
    else 
        printf("Unidade invalida. Use 'm', 'cm' ou 'mm'.\n");
    

    return 0;
}
