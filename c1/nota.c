#include <stdio.h>

//aluno, nota, média

int main()
{

    //Entrada de dados
    char nome[20];
    float nota1, nota2, nota3;
    float media;

    //nome do aluno
    printf("Digite o nome do aluno:");
    scanf("%s", &nome);
    //notas
    printf("\nNotas\n");
    printf("Nota 1:\n", nota1);
    scanf("%f", &nota1);
    printf("Nota 2:\n", nota2);
    scanf("%f", &nota2);
    printf("Nota 3:\n", nota3);
    scanf("%f", &nota3);

    //media
    media = (nota1 + nota2 + nota3) / 3;
    printf("O aluno:%s\n", nome);
    printf("Tem A média: %.2f\n", media);
}
