#include <stdio.h>
#include <stdlib.h>


    struct Aluno {
    char nome[500];
    int numeroDeMatricula;
    char curso[500];
    };
    
    int main(){
     
     struct Aluno Alunos[5];
          int i;
    

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno:   ");
        scanf("%s", Alunos[i].nome);

        printf("Digite o numero de matricula do aluno:  ");
        scanf("%d", &Alunos[i].numeroDeMatricula);

        printf("Digite o curso do aluno:  ");
        scanf("%s", Alunos[i].curso);
    }


    printf("\nExibindo dados dos alunos:\n");

    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", Alunos[i].nome);
        printf("Numero de matricula: %d\n", Alunos[i].numeroDeMatricula);
        printf("Curso: %s\n\n", Alunos[i].curso);
       
}

 return 0;
 
     }
