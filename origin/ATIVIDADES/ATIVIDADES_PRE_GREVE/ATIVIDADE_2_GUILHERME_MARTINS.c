#include <stdio.h>

int main() {
    int n; // Declaramos a variável n

        // Para n igual a zero e menor ou igual a 50, acrescente um número
    for(n = 1; n <= 50; n++){
        // Dentro dessa condição, criamos a variaável rest para declararmos
        // ela como a divisão de n por 2
        int rest = n % 2;

        // Se a divisão rest for igual a zero o programa irá digitar
        // o número que faz essa condição ser possível
        if(rest == 0) {
            printf("%d\n", n);
        }
    }
}
