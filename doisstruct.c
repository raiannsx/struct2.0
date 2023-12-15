#include<stdio.h>
#include<stdlib.h>

    
    struct dados_funcionario  {
    char nome[200];
    char dataAdmissao[200];
    char matricula [20];
    char endereco[200];
    };
    
     struct dados_cliente {
   char nome[200];
   char endereco[200];
   char dataNascimento[200];
    };
 
    int main (){
    struct dados_cliente cliente[3];
    struct dados_funcionario funcionario[3];
    int i;
    
  for(i = 0; i < 3; i++) {
        printf("\nSolicitando dados do cliente... \n");
        printf("\nDigite o nome: ");
        gets(cliente[i].nome);
   
        printf("Digite a data de nascimento: ");
        gets(cliente[i].dataNascimento);
       
        printf("Digite o endereço: ");
        gets(cliente[i].endereco);
    }

   
    for(i = 0; i < 3; i++) {
        printf("\nSolicitando dados do funcionario... \n");
        printf("\nDigite o nome: ");
        gets(funcionario[i].nome);
   
        printf("Digite a data de admissão: ");
        gets(funcionario[i].dataAdmissao);    
       
        printf("Digite a matricula: ");
        gets(funcionario[i].matricula);
       
        printf("Digite o endereco: ");
        gets(funcionario[i].endereco);
      
    }
      
        
    system("cls || clear");
    
    printf("\nExibindo dados dos clientes:\n");
    
 for (i = 0; i < 3; i++) {
        printf("Dados do  cliente %d:\n", i + 1);
        printf("Nome: %s\n", cliente[i].nome);
        printf("Endereço: %s\n", cliente[i].endereco);
        printf("data nascimento: %s\n", cliente[i].dataNascimento);
    }

    
    system("cls || clear");

    printf("\nExibindo dados dos funcionarios:\n");
    for (i = 0; i < 3; i++) {
        printf("Dados do  cliente %d:\n", i + 1);
        printf("Nome: %s\n", funcionario[i].nome);
        printf("Endereco: %s\n", funcionario[i].endereco);
        printf("matricula: %s\n", funcionario[i].matricula);
        printf("Data admissao: %s\n", funcionario[i].dataAdmissao);
    }

    return 0;
}
