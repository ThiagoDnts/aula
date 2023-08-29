#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("A pessoa é de maior.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }

    return 0;
}
