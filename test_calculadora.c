#include <stdio.h>
#include <assert.h>

int multiplicar(int a, int b);

int main() {
    printf("Iniciando testes da função multiplicar...\n");

    
    assert(multiplicar(5, 5) == (5 * 5));
    printf("Teste 1 (5 * 5) passou!\n");

  
    assert(multiplicar(10, 0) == (10 * 0));
    assert(multiplicar(0, 7) == (0 * 7));
    printf("Teste 2 (Zero) passou!\n");

    assert(multiplicar(-3, 4) == (-3 * 4));
    assert(multiplicar(5, -2) == (5 * -2));
    assert(multiplicar(-5, -5) == (-5 * -5));
    printf("Teste 3 (Negativos) passou!\n");

    assert(multiplicar(100, 200) == (100 * 200));
    printf("Teste 4 (Valores grandes) passou!\n");

    printf("\nTodos os testes passaram com sucesso! A função é confiável.\n");

    return 0;
}

int multiplicar(int a, int b) {
    return a * b; 
}
