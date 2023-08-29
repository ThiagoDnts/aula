#include <stdio.h>

int main() {
    float salario;
    float salarioMinimo = 1045.00; // Exemplo de salário mínimo (valor fictício)

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario > salarioMinimo) {
        printf("A pessoa ganha mais do que o salário mínimo.\n");
    } else {
        printf("A pessoa ganha igual ou menos que o salário mínimo.\n");
    }

    return 0;
}
