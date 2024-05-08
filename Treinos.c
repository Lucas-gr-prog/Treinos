#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int registro()
{
	char arquivo [20];
	char dia [20];
	char treino [50];
	char exercicios [200];
	char repeticao [100];
	char carga [200];
	
	setlocale(LC_ALL, "portuguese");
	
	printf("\t<<==__--ADICIONANDO/EDITANDO TREINO--__==>>\n\n");
	printf("\t--Qual foi  o dia treinado: ");
	
	scanf("%s", dia);
	
	strcpy(arquivo, dia);	
		
	FILE *file; //criando o arquivo
		file = fopen (arquivo, "w"); //vai abri o arquivo ('w' para write)
			fprintf(file, "--DIA: "); // escreveu "--DIA: "
			fprintf(file, dia); // escreveu o que estava na vari�vel "dia"
			fprintf(file, "	"); // s� deu um espa�o
		fclose(file); // fechou o arquivo
			
			
	system ("cls");
	
	printf("\t<<==__--ADICIONANDO/EDITANDO TREINO--__==>>\n\n");
	printf("\t--Qual treino foi feito: ");
	
	scanf("%s", treino);
	
		file = fopen (arquivo, "a"); // vai abrir o arquivo pra "a"tualizar
			fprintf(file, "--TREINO: "); // vai escrever "--TREINO"
			fprintf(file, treino); //escreveu o que est� na string ""
			fprintf(file, "	"); // deu um espa�o
		fclose(file); // fechou o arquivo
		
	system("cls");
	
	printf("\t<<==__--ADICIONANDO/EDITANDO TREINO--__==>>\n\n");
	printf("\t--Quais foram os exerc�cios feitos: ");
	
	scanf("%s", exercicios);
	
		file = fopen (arquivo, "a");
			fprintf(file, "--EXERC�CIOS: ");
			fprintf(file, exercicios);
			fprintf(file, "	");
		fclose(file);
		
	system("cls");
	
	printf("\t<<==__--ADICIONANDO/EDITANDO TREINO--__==>>\n\n");
	printf("\t--Quais as respectivas repeti��es: ");
	
	scanf("%s", repeticao);
	
		file = fopen (arquivo, "a");
			fprintf(file, "--REPETI��ES: ");
			fprintf(file, repeticao);
			fprintf(file, "	");
		fclose(file);
		
	system("cls");
	
	printf("\t<<==__--ADICIONANDO/EDITANDO TREINO--__==>>\n\n");
	printf("\t--Qual a caga utilizada: ");
	
	scanf("%s", carga);
	
		file = fopen (arquivo, "a");
			fprintf(file, "--CARGA: ");
			fprintf(file, carga);
			fprintf(file, "	");
		fclose(file);
		
	system ("cls");
	
		
	system ("pause");
		
}

int consulta()
{
		setlocale(LC_ALL, "portuguese");
		
	char dia[10];
	char conteudo[400];
	
	printf("\t<<==__--CONSULTANDO TREINO--__==>>\n\n");
	printf("\t--Qual dia ir� consultar: ");
	scanf("%s", dia);
	
	FILE *file;
	file = fopen (dia, "r");
	
	if(file == NULL)
	{
		system("cls");
		printf("\n\n\t--N�o foi poss�vel achar o dia.\n\n");
	}
	
	while(fgets(conteudo, 400, file) != NULL)
	{
		printf("\n\n\tEsse foi o treino feito:\n\n");
		printf("%s", conteudo);
		printf("\n\n\n\n");
	}
	
	system ("pause");
	
}

int excluir()
{
	
	char dia[10];
	
	printf("\n\n\t--Qual dia deseja deletar: ");
	scanf("%s", dia);
	
	FILE *file;
	file = fopen (dia, "r");	
		
	if (file == NULL)
	{
		system ("cls");
		printf("\n\n\t--Dia inexistente.\n\n");
		system ("pause");
	}
	
	else 
	{
		remove (dia);
		system("cls");
		printf("\n\n\t--Dia exluido com sucesso");
		system ("pause");
	}
	
	
}


int main() 
{
	int opcao=0; //vari�veis
	char erro=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{

	
		system ("cls"); // limpa a tela
		
		setlocale(LC_ALL, "Portuguese"); // portugues
		
		printf("\t<<==__--DADOS DO TREINO--__==>>\n\n\n"); // come�o do menu
		printf("\t1-ADICIONAR DIA\n");
		printf("\t2-CONSULTAR DIA\n");
		printf("\t3-EXCLUIR DIA\n\n");
		printf("\t4-Fechar programa"); 
		printf("\n\n\tOp��o: "); // final do menu
		
		scanf("%d", &opcao); // oq o usu�rio disse?
		scanf("%c", &erro);
		
		system("cls");
		
		switch(opcao)
		{
		
			case 1:
				registro();
				break;
	
				
			case 2:
				consulta();
				break;

				
			case 3:
				excluir();
				break;
				
			case 4:
				return 0;
				break;

				
			default:
				printf("\n\n\t==>Escolha uma op��o v�lida\n\n\n");
				system("pause");
				break;
	
		}
	
	}
		
}
