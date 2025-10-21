#include <stdio.h>
//Os tipos float e double - números decimais(ou reais) em C
//float e double, não se pode armazenar em variáveis inteiras, na linguagem C
//precisamos declarar usando os tipos de dados float e double, que são tipos especialmente feitos para que possamos trabalhar com números reais(decimais)

//Como declarar e inicializar vairáveis do tipo float e double na linguagem C
//lembrando que, para inteiros, declaramos da seguinte maneira: int idade, int mes etc...
//Analogamente, para floats e double:
//float pi;
//float juros;
//double tamanho_de_uma_bacteria;
//double area_de_uma_circunferencia;
//
//Lembrando numero decimal em programação se usa o ponto ao inves da virgula
//
//Podemos inicializar valores tanto na declaração das variáveis como somente depois;
//float pi =3.14
//float juros = 1.23343
//
//oU
//
//float pi;
//double juros;
//pi = 3.14
//juros = 1.32202
//


//qual a diferença entre float e double
//temos duas opções iguais para representar números decímais? na verdade não, há uma diferença
//Variaveis float exigem,geralmente 4 bytes de memória para serem armazenadas
//enquanto double necessitam de 8 bytes
//
//float pi = 3.14 //um numero exato
//double pi = 3.14159265358979323 //um número mais preciso
//
//sempre que fazemos uma operação matemática de um decimal com inteiro, obteremos sempre um decimal.


//imprimindo números reais flaot e double na tela através do printf
/*
para representar números inteiros usamos o %d dentro das aspas, de um printf
para representar números decímais, floats, double, usamos; %f
*/


//ex; mostrar o valor de pi com precisão simples(float) e outro com precisão dupla(double)
/*
int main()
{
    float pi = 3.14;
    double piDouble = 3.1415926535897932384626433832795;
    printf("Valor de pi %f\n", pi);
    printf("Valor de pi mais preciso %f\n", piDouble);
    //aqui notamso uma coisa curiosa no segundo valor, é exibido: 3.141593
    //Ou seja, o C não mostrou todo o valor da variável double 'piDouble' e ainda arrendondou!
    //Podemos resolver isso da seguinte maneira. Supondo que vocÊ queira que seja exibido 6 casas decimais:
    //Ao invés de usar %f coloque %.7f
    //Ou seja, esse 0.7f diz ao C o seguinte "Após o ponto, exiba 7 casas decimais".
    printf("Valor de pi %f\n", pi);
    printf("Valor de pi mais preciso %.7f\n", piDouble);
    //será exibido: 3.1415927
    //
    //a variável pi tem somente duas casas decimais depois do ponto, oque ocorre se eu ordenar ao printf que imprima com 5 casas decimais?
    printf("Valor de pi %.5f\n",pi);
}
*/


//Como imprimir números na forma exponencial em C
/*
Outra maneira de imprimir variáveis deciamis é usando exponenciais.
Podemos inicializar uma variável da seguinte maneira:
float numero = xEy;
isso segnifica; x vezes 10 elevado a -y = x*10^y
Ou seja, 1E6 = 1 vezes 10^6 = 1 milhão

e float numero = xE-y
segnifica: x vezes 10 elevado a -y = x*10^(-y)
ex; 2E-3 = 2 vezes 10^(-3)=0.002
*/
int main()
{
    float salarioSonho = 1E6,
        salarioReal = 10E-3;
        printf("Sonhei que meu salario era de R$%.2f, \nmas acordei e era R$%.2f",salarioSonho,salarioReal);
}
/*
nesse ultimo exemplo, note como declaramos mais de uma variavel.
Em vez de fazer;
float variavel1;
float variavel2;
float variavel3;

Você pode fazer:
float variavel1, variavel2, variavel3;

Ou, para ficar mais legível;
float variavel1,
      variavel2,
      variavel3.
*/
