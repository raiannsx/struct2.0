#include<stdio.h>
#include<stdlib.h>

struct aluno {
    char nome[300];
    int idade;
    int primeiraNota;
    int segundaNota;
    float media;
};

int main() {
    struct aluno Aluno[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", Aluno[i].nome);

        printf("Digite a idade do aluno: ");
        scanf("%d", &Aluno[i].idade);

        printf("Digite a primeira nota: ");
        scanf("%d", &Aluno[i].primeiraNota);   

        printf("Digite a segunda nota: ");
        scanf("%d", &Aluno[i].segundaNota);
        
        // Calculando a média
        Aluno[i].media = (Aluno[i].primeiraNota + Aluno[i].segundaNota) / 2.0;
    }

    printf("\nExibindo dados do aluno na tela\n");

    for (i = 0; i < 3; i++) {
        printf("\nAluno: %d\n", i + 1);
        printf("Nome:  %s\n", Aluno[i].nome);
        printf("Idade: %d\n", Aluno[i].idade);
        printf("Primeira nota: %d\n", Aluno[i].primeiraNota);
        printf("Segunda nota: %d\n", Aluno[i].segundaNota);
        printf("Média: %.2f\n\n", Aluno[i].media);
        
    }

    return 0;
}
