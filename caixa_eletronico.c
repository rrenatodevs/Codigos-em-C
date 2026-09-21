#include <stdio.h>

int main() {
    int notas[5] = {100, 50, 20, 10, 5};
    int qtd[5];
    int valor, resto;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    resto = valor;

    for (int i = 0; i < 5; i++) {
    qtd[i] = resto / notas[i];
    resto %= notas[i];
}

    for (int i = 0; i < 5; i++) {
        if (qtd[i] > 0) {
            printf("%d nota(s) de R$%d\n", qtd[i], notas[i]);
        }
    }
    return 0;
}