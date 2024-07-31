Atividade 1: Exibir números pares de 1 a 10 usando while

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}


Atividade 2: Solicitar ao usuário que adivinhe um número entre 1 e 100 usando do while

#include <stdio.h>

int main() {
    int numeroSecreto = 42; // Número secreto para adivinhar
    int chute;

    do {
        printf("Adivinhe um número entre 1 e 100 (-1 para sair): ");
        scanf("%d", &chute);

        if (chute == -1) {
            printf("Você desistiu!\n");
            break;
        }

        if (chute < numeroSecreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (chute > numeroSecreto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número secreto!\n");
            break;
        }
    } while (1); // Loop infinito até que o usuário acerte ou desista

    return 0;
}


Atividade 3: Calcular a soma dos primeiros 10 números inteiros positivos usando for


#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}
