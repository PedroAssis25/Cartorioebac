#include <stdio.h> //biblioteca de comunica��o do usuario
#include <stdlib.h> //biblioteca de aloca��o do espa�o de memoria 
#include  <locale.h> //biblioteca de aloca��o de texto por regi�o 
#include <string.h> //biblioteca respons�vel por cuidadar das string

int registro()//Fun��o responsalvel por cadastrar os usuarios no sistema
{
 //inicio cria��o de variaveis/string	
 char arquivo[40];
 char cpf[40];
 char nome[40];
 char sobrenome[40];
 char cargo[40];
 //final da cria��o de variaveis
 printf("Digite seu CPF que sera cadastrado:");//coletando informa��o do usu�rio
 scanf("%s", cpf);//%s refere-se a string 
 
 strcpy(arquivo, cpf);//Responsavel por copiar os valores das string
 
 FILE *file;//Cria o arquivo
 file= fopen(arquivo, "w");//Cria o arquivo e o "w" significa escrever
 fprintf(file, cpf);//Salvo o valor da variavel
 fclose(file);
 
 file=fopen(arquivo,"a");
 fprintf(file,",");
 fclose(file);
 
 printf("Digite o nome a ser cadastrado:");
 scanf("%s",nome);
 
 file = fopen(arquivo, "a");
 fprintf(file,nome);
 fclose(file);
 
 file = fopen(arquivo, "a");
 fprintf(file,",");
 fclose(file);
 
 printf("Digite o sobrenome a ser cadastrado:");
 scanf("%s",sobrenome);
 
 file= fopen(arquivo,"a");
 fprintf(file,sobrenome);
 fclose(file);
 
 file = fopen(arquivo, "a");
 fprintf(file,",");
 fclose(file);
 
 printf("Digite o cargo a ser cadastrado:");
 scanf("%s",cargo);
 
 file= fopen(arquivo,"a");
 fprintf(file,cargo);
 fclose(file);
 
 file = fopen(arquivo, "a");
 fprintf(file,",");
 fclose(file);
 
 system("pause");
}
 
 int consulta()
 {
 	setlocale(LC_ALL,"portuguese");
 	char cpf[40];
 	char conteudo[200];
	
	printf("Digite o cpf a ser consultado:");
	scanf("%s",cpf);
	
	FILE*file;
	file=fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
		
	}
	
	while(fgets(conteudo,200,file)!=NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
		
	}
	 system("pause");
 }
 
 
 int deletar()
 {
 	char cpf[40];
 	
 	printf("Informe o cpf a ser deletado:");
 	scanf("%s", cpf),
 	
 	remove(cpf);
 	
 	FILE*file;
	file=fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuario n�o se encontra no sistema!\n");
		system("pause");
		
		
	}
 	
 	
 }
 
 int main()
{
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
   {
	system("cls");
	
	setlocale (LC_ALL, "Portuguese"); //Definindo linguagem
	
	printf("Cart�rio da EBAC\n\n");//Inicio do menu
	printf("Escolha a op��o que mais te agrada abaixo:\n\n");
	printf("\t1- Registrar nomes\n");
	printf("\t2- Consultar nomes\n");
	printf("\t3- Deletar os nomes\n\n");
	printf("Qual op��o voc� deseja?:\n\n");//Fim do menu
	
	scanf("%d",&opcao);//Op��es poss�veis 
	
	system("cls");//Responsavel por limpar a tela 
	
	switch(opcao)//Inicio da sele��o do menu
	{
	 case 1:
     registro();//Chamada de fun��es
	 system("pause");
	 //break;
	 switch(opcao)
	 {
	 	case 1:
        
  		printf("pedro sla oq");
  		system("pause)");
	 	break;
	 	
	 }
	 
	 case 2: 
	 consulta();
     break;
     
     case 3:
     deletar();
   	 break;
   	 
   	 
     default:
     printf("Essa op��o n�o est� dispon�vel\n");//Fim da sele��o
   	 system("pause");
   	 break;
   	 	
	}
	

   }
}
