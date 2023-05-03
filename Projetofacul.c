//1 Projeto facul

#include <stdio.h>
#include<string.h>
#define SIZE 200
char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int prog;
void cadastro();
void pesquisa();
void lista();

int main(void){
	do{
		system("cls");
		printf("\n ************Menu**********\n-1cadastrar\n-2listartodos\n-3pesquisar\n-4 sair-");
		scanf("%d", &prog);
		switch(prog){
			case 1:
				cadastro();
				break;
			case 2:
				lista();
				break;
			case 3:
				pesquisa();
				break;
			case 4:
				system("exit");
				break;
			default:
				printf("opcao invalida");
				break;
				getchar();
				getchar();
	}
} while (prog!=4);

}

void lista(){
	int i;
	for(i=0;1<SIZE;i++){
		if(cpf[i]>0){
			printf("\nNome: %s\nEmail: %s \nCpf: %d", nome[i], email[i], cpf[i]);
		}else{
			break;
		}
	}
	getchar();
	getchar();
	getchar();
	getchar();

}

void cadastro(){

	static int linha;


	do
	{
		printf("\ndigite o nome\n");
		scanf("%s", &nome);
		printf("\ndigite o email\n");
		scanf("%s", &email);
		printf("\ndigite o cpf\n");
		scanf("%d", &cpf);
		printf("\npara cadastrar outro usuario, digite o numero 1, para sair qualquer outra tecla\n");
		scanf("%d", &prog);
		linha++;
	} while(prog==1);
}
//fim da fun��o cadastro

void pesquisa(){
	int cpfpesquisa;
	char emailpesquisa[50];
	int i;

	do{
		printf("digite 1 para pesquisar por cpf e 2 para pesquisar por email");
		scanf("%d", &prog);
		switch(prog){
			case 1:
				printf("digite o cpf\n");
				scanf("%d", &cpfpesquisa);
				for(i=0;1<SIZE;i++){
					if(cpf[i]==cpfpesquisa){
						printf("\nNome: %s\nEmail: %s \nCpf: %d", nome[i], email[i], cpf[i]);
				}
			}
				break;

			case 2:
				printf("\nDigite o e-mail");
				scanf("%s", emailpesquisa);
				for(i=0;1<SIZE;i++){
				if(strcmp(email[i], emailpesquisa)== 0){
					printf("\nNome: %s\nEmail: %s Cpf: %d", nome[i], email[i], cpf[i]);
			}
				}
				break;
			default:
				printf("opcao invalida");
				break;
		}
			printf("\n digite 1 para continuar pesquisando");
			scanf("%d", &prog);
	}while(prog==1);
}




