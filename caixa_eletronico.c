#include <stdio.h>

int main() {
// variáveis das notas com a quantidade de itens que tem nela.
    int notas[5] = {100, 50, 20, 10, 5};
    int qtd[5];
    int valor, resto;
// um printf para o usuário digitar o valor em que deseja sacar
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    resto = valor;
// vai fazer a conta do saque para o quantidade de notas que irá ter que devolver
    for (int i = 0; i < 5; i++) {
    qtd[i] = resto / notas[i];
    resto %= notas[i];
}
// função que irá fazer a conta das notas
    for (int i = 0; i < 5; i++) {
        if (qtd[i] > 0) {
            printf("%d nota(s) de R$%d\n", qtd[i], notas[i]);
        }
    }
    return 0;
}