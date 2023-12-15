#include<stdio.h>
#include<stdlib.h>

    struct agenda{
    
    char nome [200];
    char email [200];
     char endereço [200];
    int telefone;
    float dataAniversario;
    };
    
    int main(){
    struct agenda agenda[2];
    int i;
    
        
    for (i = 0; i < 2; i++) {
        
        printf("digite o nome:  ");
        scanf("%s", agenda[i].nome);
        
         printf("digite o email:  ");
        scanf("%s", agenda[i].email);
        
         printf("digite o endereço:  ");
        scanf("%s", agenda[i].endereço);
        
         printf("digite o telefone:  ");
        scanf("%d", &agenda[i].telefone);
        
         printf("digite a data de aniversario:  ");
        scanf("%f", &agenda[i].dataAniversario);;
        
        
      printf("\nExibindo as informações da agenda na tela\n");
            
        printf("Agenda %d:\n", i + 1 );
        printf("Nome: %s\n", agenda[i].nome);
        printf("Email: %s\n", agenda[i].email);
        printf("Endereço: %s\n", agenda[i].endereço);
        printf("telefone:%d\n", agenda[i].telefone);
        printf("Data Aniversario: %.2f\n\n", agenda[i].dataAniversario);
    }
    
    return 0;
    
    }
