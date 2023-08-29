#include <stdio.h>

int main() {
    float peso;

    printf("Digite o peso em quilogramas: ");
    scanf("%f", &peso);

    if (peso < 60.0) {
        printf("O peso é menor do que 60kg.\n");
    } else {
        printf("O peso não é menor do que 60kg.\n");
    }

    return 0;
}
