#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    char continuar;

    do {
        printf("\n--- MENU CALCULADORA ---\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Divisao\n");
        printf("4. Multiplicacao\n");
        printf("Escolha uma opcao (1-4): ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            if (opcao == 1) {
                resultado = num1 + num2;
                printf("Resultado da Soma: %.2f\n", resultado);
            } 
            else if (opcao == 2) {
                resultado = num1 - num2;
                printf("Resultado da Subtracao: %.2f\n", resultado);
            }
            else if (opcao == 3) {
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da Divisao: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisao por zero!\n");
                }
            }
            else if (opcao == 4) {
                resultado = num1 * num2; 
                printf("Resultado da Multiplicacao: %.2f\n", resultado);
            }
        } 
        else {
            printf("Opcao invalida!\n");
        }

        printf("\nDeseja executar outra operacao? (S para sim, N para sair): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado.\n");

    return 0;
}
