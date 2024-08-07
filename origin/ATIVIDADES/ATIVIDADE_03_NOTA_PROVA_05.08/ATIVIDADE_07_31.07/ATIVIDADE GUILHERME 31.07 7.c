1. Calculadora Simples

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    float divisao = (float)num1 / num2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}

2. Conversão de Temperatura

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}


3. Exercício: Verificação de Número Par

#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    return 0;
}


4. Cálculo de Média Ponderada


#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("A média ponderada é: %.2f\n", media);

    return 0;
}


5. Troca de Valores

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("O primeiro número é: %d\n", num1);
    printf("O segundo número é: %d\n", num2);

    return 0;
}

