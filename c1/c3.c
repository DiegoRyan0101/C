#include <stdio.h>
#include <stdlib.h>
//Lendo e escrevendo nas variáveis

/*
-Variáveis
em computação, uma variável é uma posição de memória em que podemos guardar determinado dado ou valor e modificá-lo ao longo da execução do programa.
---------------------------------------------------
-Declarando uma variável
Em linguagem C, a declaração de uma variável pelo programa segue está forma geral:

tipo_da_variável nome_da_variável;

.O tipo_da_variável determina o conjunto de valores e de operações que uma variável aceita, ou seja, que ela pode executar.
.Já o nome_da_vairável é como o programador identifica essa variável dentro do programa.

Suponha que queriamos declarar uma variável do tipo inteiro e de nome x. Ela pode ser facilmente declarado como aprensentado a seguir;
int x;

Além disso, mais de uma variável pode ser declarada para um mesmo tipo, ao mesmo tempo. Para tanto, basta separar cada nome de variável por uma vírgula(,):
int x,y,z;

Toda declaração de variáveis termina com o operador de ponto e vírgula(;)
Uma variável deve ser sempre declarada antes de ser usada dentro do programa.
relembrando apenas quando declaramos uma variável é que o computador reserva um espaço de memória para guardarmos nossos dados.
antes de usar o conteúdo de uma variável, tenha certeza de que ele foi definido antes.
----------------------------------------------
Dando um nome à nossa variável
algumas regras para escolher o nome de uma variável na linguagem C
.O nome de uma variável é um conjunto de caracteres que podem ser letras, números ou underscores(
.O nome de uma variável deve sempre iniciar com uma letra ou o underscore(_)
Na linguagem C, letras maiúsculas e minúsculas são consideradas diferentes, cameuCaise.
A linguagem C é case-sensitive, ou, seja, uma palavra escrita utilizando caracteres maiúsculos é diferente da mesma palavra escrita com caracteres minúsculos.
Palavras-chaves não podem ser usadas como nome de variáveis. palavras-chaves são palavras reservadas dentro da linguagem C, são elas que formam a sintaxe da linguagem de programação C
---------------------------------------------
o tipo char
Esse tipo de dados permite armazenar em um único byte(8bits) um número inteiro muito pequeno ou o código de um caractere do conjunto de caracteres da tabela ASCII:
char c = 'a';
char n = 10;
Caracteres sempre ficam entre aspas simples!
Uma única letra pode ser o nome de uma varíável. As aspas simples permitem que  o compilador saiba que estamos inicializando nossa variável com um caractere e não com o conteúdo de outra variável.
--------------------------------------------
O tipo int
Esse tipo de dado permite armazenar um número inteiro(sem parte fracionária). seu tamanho depende do processador em que o programa está rodando e é tipicamente 16 ou 32 bits:
int n = 1459;
Cuidado com a forma como você inicializa as variáveis dos tipos char e int
Na linguagem C, os tipos char e int podem ser especificados nas bases decimal, octal ou hexadecimal. A base decimal é a base-padrão. Porém, se o valor inteiro for precedido por::
.0, ele srá interpretado como octal. Nesse caso, o valor deve ser definido utilizando os dígitos 0,1,2,3,4,5,6 e 7. Ex: int x = 044 .Nesse caso, 044 equivale a 36(4*8¹+4*8º)
.0x ou 0X ,ele será interpretado como hexadecimal. Nesse caso, o valor deve ser definido utilizando os dígitos 0,1,2,3,4,5,6,7,8 e 9, e as letras A(10),B(11),C(12),D(13),E(13),F(15),  ex; int y = 0x44 Nesse caso, 0x44 equivale a 68(4*16¹+4*16º)
---------------------------------------------
O tipos float e double
O terceiro e o quarto tipo de dados são os tipos  reais: float e double. Esse tipos de dados permitem armazenar um valor real(com parte fracionária), também conhecido como ponto flutuante. A diferença entre eles é a sua precisão
.Tipo float: precisão simples
.Tipo double: dupla precisão

Em números reais, a parte decimal usa ponto, e não vírgula!
A linguagem C usa o padrão numérico americano, ou seja, a parte decimal fica depois de um ponto.
ex; float f = 5.25;
    double d = 25.456;

pode-se escrever números dos tipos float e double usando notação cientifica.
a notação cientifica é uma forma de escrever números extremamente grandes ou extremamente pequenos. Nesse caso, o valor real é seguido por uma letra "e" ou "E" e um número inteiro(positivo ou negativo), que indica o expoente da base 10 (representado pela letra "e" ou "E" que multiplica o número):
    double x = 5.0e10;
equivale a
    double x = 50000000000;
-----------------------------------------------
o tipo void
temos o tipo void. Esse tipo de dados permite declarar uma função que não retorna valor ou um ponteiro genérico, como será visto nas proximas seções.
a linguagem C não permite que se declare uma variável do tipo void. Esse tipo de dados só deve ser usado para declarar funções que não retornam valor ou ponteiro genérico.
------------------------------------------------
Os modificadores de tipo de uma variável
além dos cincos tipos básicos, a linguagem C possui quatro modificadores de tipos. Eles são aplicados precedendo os tipos básicos(com exceção do tipo void), e permitem alterar o significado do tipo, de modo a adequá-lo às necessidades do nosso programa.
São eles:
.signed
.unsigned
.short
.long

O modificador signed
esse modificador determina que uma variável declarada dos tipos char ou int poderá ter valores positivos ou negativos. trata-se do modo-padrão de definição de variáveis desses tipos,e,por esse motivo,raramente é usado.
ex;
     signed char x;
     signed int x;


O modificador unsigned
esse modificador determina que uma variável declarada dos tipos char ou int somente poderá ter valores positivos e o valor zero.Nesse caso, a variável perde seu bit de sinal, o que dobra a sua capacidade de armazenamento para valores positivos. ex;
Uma variável do tipo char é capaz de armazenar valores de -128 até 127. se a mesma variável for declarada como sendo do tipo unsigned char, ela será capaz de armazenar valores de 0 até 255.
ex de uso;
          unsigned char x;
          unsigned int y;

O modificador short
o modificador short determina que uma variável do tipo int terá apenas 16bits (inteiro pequeno),independentemente do processador.
ex;
      short int i;

O modificador long
faz o inverso do modificador short. O modificador long determina que uma variável do tipo int terá 32 bits(inteiro grande), independentemente do processador. Também determina que o tipo double possua maior precisão.
ex;
    long int n;
    long double d;

Usando mais de um modificador ao mesmo tempo
A linguagem C permite que se utilize mais de um modificador de tipo sobre um mesmo tipo.
isso permite, por exemplo, declarar um inteiro grande(ou seja, com 32bits) usando o modificador(long) e que também seja em sinal(unsigned).
Essa combinação permite aumentar em muito o intervalo de valores possíveis para aquela variável;
    unsigned long int m;
------------------------------------------------
escrevendo suas variáveis na tela

Printf
a função printf() é uma das funções de saída/escrita de dados da linguagem C.
Seu nome vem da expressão em inglês print formatted, ou seja, escrita formatada.
basicamente, a função printf() escreve na saída de vídeo(tela) um conjunto de valores, caracteres e/ou sequência de caracteres de acordo com o formato especificado.
a forma geral da função printf() é;
                                        printf("tipos de saída",lista de variáveis);
a função printf() recebe dois paramêtros de entrada;
."tipos de saída": conjunto de caracteres que especifica o formato dos dados a serem escritos e/ou o texto a ser escrito
.lista de variáveis:conjunto de nomes de variáveis, separados por vírgula, que serão escritos.
--------------------------------------------------
Escrevendo valores formatados
quando queremos escrever dados formatados na tela, usamos a função geral da função, a qual possui os tipos de saída.
eles especificam o formato de saída dos dados que serão escritos pela função printf().
cada tipo de saída é precedido por um sinal de %, e um tipo de saída deve ser especificado para cada variável a ser escreita.
Assim, se quiséssemos escrever uma única expressão com o comando printf(), FARIÁMOS

            printf("%ipo_de_saída",expressão);

        se fossem duas expressões a serem escritas, fariámos

            printf("%tipo1 %tipo2",expressão1,expressão2);

    e assim por diante. Note que os formatos e as expressões a serem escritas com esse
    formato devem ser especificados na mesma ordem, como mostra os formatos acima. além disso
    as variáveis e/ou expressão devem ser separadas por vírgulas.

    O comando printf() não exige o símbolo &(e comercial) na frente do nome de cada variável.
    Diferentemente do comando scanf(), o comando printf() não exige o símbolo & na frente do nome de uma variável que será escrita na tela.
    Se usado, ele possui outro significado e não exibe o conteúdo da variável.

    A função printf() pode ser usada para escrever praticamente qualquer tipo de dado.

    alguns tipos de saída suportados pela linguagem.
    %c        |escrita de uma caractere (char)
    %d ou %i  |escrita de números inteiros (int ou char)
    %u        |escrita de números inteiros sem sinal (unsigned)
    %f        |escrita de números reais (float ou double)
    %s        |escrita de varios caracteres (string)
    %p        |escrita de um endereço de memória
    %e ou %E  |escrita em notação cientifica

    \n | serve para quebrar uma linha.
*/
/*
int main()
{
    int x;//declara a variável mas nao define valor
    printf("x = %d\n",x);//saída qualquer valor
    x = 5;//define o valor de x como sendo 5
    printf("x = %d\n",x);//saída 5
    system("pause");
    return 0;

}
*/

/*
int main()
{
    //tipo int
    int a = 125;//valor em decimal
    int b =0435;//valor em octal, equivale a 285
    int c = 0x1FA;//valor em hexadecimal, equivale a 506
    printf("Valor de a: %d\n",a);
    printf("Valor de b: %d\n",b);
    printf("Valor de c: %d\n",c);
    return 0;
}
*/

/*
int main()
{
    //printf()
    printf("hacking"); //note que o texto a ser escrito deve ser sempre definido entre aspas duplas.
}
*/

/*
int main()
{
    printf("esse texto sera escrito na tela");
    system("pause");
    return 0;
}
*/

/*
int main()
{
    int x = 10;
    //Escrita de um valor inteiro
    printf("%d\n",x);
    float y = 5.0;
    //Escrita de um valor inteiro e outro real
    printf("%d%f\n",x,y);
    //adicionando espaço entre os valores
    printf("%d %f\n",x,y);
    system("pause");
    return 0;
}
//Nesse exemplo, os comando
// printf("%d%f\n",x,y);
//e
// printf("%d %f\n",x,y);
//imprimem os mesmos dados, mas o segundo os separa com um espaço. Isso ocorre porque o comando printf() aceita texto junto aos tipos de saída.
//pode-se adicionar texto antes, depois ou entre dois ou mais tipos de saída:
//printf("texto %tipo_de_saída texto",expressão);
*/

/*
int main()
{
//junto ao tipo de saída, pode-se adicionar texto e não apenas espaços.
    int x = 10;
    printf("Total = %d\n",x);
    printf("%d caixas\n",x);
    printf("Total de %d caixas\n",x);
    system("pause");
    return 0;
//Isso permite que o comando printf() seja usado para escrever não apenas dados,
//mas sentenças que façam sentido para o usuário do programa.
}
*/

/*
int main()
{
    //Putchar
    //a função putchar() (put character) permite escrever um único caractere na tela.
    //Sua forma geral é;
    // int putchar(int caractere);
    //A função putchar() recebe como parâmetro de entrada um único valor inteiro,
    //Esse valor será convertido em caractere e mostrado na tela. A função retorna:
    // se NÂO ocorrer erro: o próprio caractere que foi escrito.
    // se ocorrer erro: a constante EOF (definida na biblioteca stdio.h) ẽ retornada.
    char c = 'a';
    int x = 65;
    putchar(c);//Escreve o caractere 'a'
    putchar('\n');//quebra uma linha
    putchar(x);// Escreve o valor 65 como caractere
    putchar('\n');//quebra uma linha
    system("pause");
    return 0;
//Perceba, no exemplo anterior, que a conversão na linguagem C é direta no momento da impressão, ou seja, o valor 65 é convertido no caractere ASCII
//Correspondente, no caso, o caractere "a". Além disso, o comando putchar() também aceita o uso de sequências de escape, como o caractere "\n" (nova linha)
}
*/

/*
int main()
{
    //Lendo suas variáveis do teclado
    //A função scanf() é uma das funções de entrada/leitura de dados da linguagem C.
    //Seu nome vem da expressão em inglês scan formatted, ou seja, leitura formatada.
    //Basicamente, a função scanf() lê do teclado um conjunto de valores, caracteres e/ou
    //sequência de caracteres de acordo com o formato especificado.
    //A forma geral da função scanf() é:
    //      scanf("tipos de entrada",lista de variáveis);
    //A função scanf() recebe dois parâmetros de entrada:
    //."tipo de entrada":conjunto de caracteres que especifica o formato dos dados a serem lidos.
    //.lista de variáveis:conjunto de nomes de variáveis que serão lidos e separados por vírgula, em que cada nome de variável é precedido pelo operador &
    //Os tipos de entrada especificam o formato de entrada dos dados que serãm lidos pela função scanf().
    //Cada tipo de entrada é precedido por um sinal de %, e um tipo de entrada deve ser  especificado para cada variável a ser lida. Assim, se quiséssemos ler uma única variável com o comando scanf(), fariámos:
    // scanf("%tipo_de_entrada",&variável);
   //Se fossem duas as variáveis a serem lidas, fariámos:
    // sacnf("%tipo1 %tipo2",&var1, &var2);
    //e assim por diante. Note que os formatos e as variáveis que armazenarão o dado com aquele formato devem ser especificados na mesma ordem, como mostram as setas. Além disso, as variáveis devem ser separadas por vírgulas.
    //Na linguagem C, é necessário colocar o símbolo & antes do nome de cada variável a ser lida pelo comando scanf()
    //Trata-se de uma exigência da linguagem C. Todas as variáveis que receberão valores do teclado por meio de scanf() deverão ser passadas pelos seus endereços.
    //Isso se faz colocando o operador de endereço "&" antes do nome da variável.
    //a função scanf() pode ser usada para ler praticamente qualquer tipo de dado.
    //No entanto, ela é usada com mais frequência para a leitura de números inteiros e/ou de ponto flutuante(números reais)
  //alguns tipos de saída suportados pela linguagem.
  //%c       |leitura de um caractere(char)
  //%d ou %i |leitura de números inteiros(int ou char)
  //%f       |leitura de números reais(float)
  //%s       |leitura de vários caracteres(string)
  //%If      |leitura de números reias(double)

//alguns exemplos de leitura de dados utilizando o comando scanf()
    int x,z;
    float y;
    //Leitura de um valor inteiro
    scanf("%d\n",&x);
    //Leitura de um valor real
    scanf("%f\n",&y);
    //Leitura de um valor inteiro e outro real
    scanf("%d%f\n",&x,&y);
    //Leitura de dois valores inteiros
    scanf("%d%d\n",&x,&z);
    //Leitura de dois valores inteiros com espaço
    scanf("%d %d\n",&x,&z);
    system("pause");
    return 0;

    //Nesse exemplo, os comandos
        //scanf("%d%d",&x,&z);
    //e
        //scanf("%d %d",&x,&z);
    //são equivalentes. Isso ocorre porque o comando scanf() ignora os espaços em branco entre os tipos de entrada.
    //Além disso, quando o comando scanf() é usado para ler dois ou mais valores, podemos optar por duas formas de digitar os dados no teclado:
    //.Digitar um valor e, em seguida, pressionar a tecla ENTER. Fazer isso para cada valor a ser digitado.
    //.Digitar todos os valores separados por espaço e, por último, pressionar a tecla ENTER

    //O comando scanf() ignora apneas os espaços em branco entre os tipos de entrada.
    //Qualquer outro caractere inserido entre os tipos de dados deverá ser digitado pelo usuário, mas será descartado pelo programa.
    int dia, mes, ano;
    //Leitura de três valores inteiros
    //Com barras entre eles
    scanf("%d/%d/%d",&dia,&mes,&ano);
    system("pause");
    return 0;
    //Isso permite que o comando scanf() seja usado para receber dados formatados como uma data: dia/mês/ano.
    //No ex anterior, o comando scanf() é usado para a entrada de três valores inteiros separados por uma barra ("/") cada.
    //quando o usuário for digitar os três valores, será obrigado a digitar os três valores separados
    //por barra(as barras serão descartadas e não interferem nos dados). Do contrário, o comando scanf() não lerá corretamente os dados digitados.
    //


}
*/

/*
int main()
{
    //Getchar
    //a função getchar() (get character) permite ler um único caractere do teclado. sua forma geral é:
    //   int getchar(void);
    //a função getchar() não recebe parâmetros de entrada. A função retorna:
    //.Se NÂO ocorrer erro: o código ASCII do caractere lido.
    //Se ocorrer erro: a constante EOF(definida na biblioteca stdio.h) é retornada.
    char c;
    c = getchar();
    printf("Caractere: %c\n",c);
    printf("Codigo ASCII: %d\n",c);
    system("pause");
    return 0;
    //perceba, nesse exemplo, que a conversão na linguagem C é direta no momento da leitra
    //ou seja, embora a função retorne um valor do tipo int, pode-se atribuir a uma variável do tipo char
    //em virtude da conversão automática da linguagem C.
}
*/


/*
//#include <stdio.h> //=
//#include <stdlin.h>//= os dois include são escopo globla, que ficam no topo do código
int x =5;//variável global
void incr()//escopo global
{
   x++;//acesso a variavel global //=>escopo local
}
int main()//escopo global
{
     /*
     escopo: o tempo de vida da variável
     quando declaramos uma variável, vimos que é preciso sempre definir o seu tipo(conjunto de valores e de operaçãoes que uma variável aceita)
     e nome(como o programador identifica essa variável dentro do programa). Porém, além disso, é preciso definir o seu escopo.
     O escopo é o conjunto de regras que determinam o uso e a validade das variáveis ao longo do programa.
     Em outras palavras, escopo de uma variável define onde e quando a variável pode ser usada.
     Esse escopo está intimamente ligado ao local de declaração dessa variável e, por esse motivo, pode ser global ou local.
     */
/*
    //O escopo global
    //Uma variável declarada no escopo global, ou simplesmente variável global, é uma variável declarada fora de todas as funções do programa, ou seja, na área de declarações globais do programa
    //(acima da cláusula main, juntamente com as bibliotecas do programa). Essas variáveis existem enquanto o porgrama estiver executando, ou seja, o tempo de vida de uma variável global é o tempo de execução do programa.
    //Além disso, essas variáveis podem ser acessadas e alteradas em qualquer parte do programa.
    //variáveis globais podem ser acessadas e alteradas em qualquer parte do programa.
    printf("x = %d\n",x);//acesso a variavel global  //=
    incr();                                          //=
    printf("x = %d\n",x);//acesso a variável global  //==>escopo local
    system("pause");                                 //=
    return 0;                                        //=

    /*
    Note, no exemplo anterior, que a variável x é declarada com as bibliotecas do programa; portanto, trata-se de uma variável global(escopo global).
    Por esse motivo, ela pode ser acessada e ter eu valor alterado em qualquer parte do programa(ou seja, no escopo global e em qualquer escopo local que exista dentro do programa).
    De modo geral, evita-se o uso de variáveis globais em um programa.
    as variáveis globais devem ser evitadas porque qualquer parte do programa pode alterá-la.
    * /
}
*/

int main()
{
    //O escopo local
    //
}



