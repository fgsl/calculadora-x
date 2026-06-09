#include <stdio.h>
#include "function_multiplicar.c"
#include "function_dividir.c"


int main()
{
    int input = 0;
    int numero1;
    int numero2;

    printf("Calculadora\n\n");

    printf("1 - soma\n");

    printf("2 - subtraçaõ\n");

    printf("3 - divisão\n");

    printf("4 - multiplicação\n");

    scanf("%d", &input);

    if(input == 4){
        printf("\nDigite o priemiro numero: ");
        scanf("%d", &numero1);
        printf("\nDigite o segundo numero: ");
        scanf("%d", &numero2);

        printf("Resultado é :%d", multiplicar(numero1, numero2));
    }

}
