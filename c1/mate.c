#include <stdio.h>
#include <math.h> //para usar funções matemáticas prontas. biblioteca matemática

//Funções Matemáticas em C
int main()
{
    //pow = potência (base, expoente)
    printf("Potência de 2 elevado a 3: %.2f \n", pow(2,3) );

    //raiz quadrada
    printf("Raiz quadrada de 64: %.2f \n", sqrt(64));

    //raiz cúbica
    printf("Raiz cúbica de 27: %.2f \n", cbrt(27));

    //resto da divisão: utiliza-se o operador %
    printf("Resto da divisão de 9 por 2: %d \n", 9%2);

    //quociente da divisão
    printf("Quociente de divisão de 9 por 2: %d \n", 9/2);

    return 0;
}

