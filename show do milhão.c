#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void show_record();
void reset_score();
void help();
void edit_score(float , char []);
void confirm_answer(void)
	{
		printf("Confirmando resposta");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".");
		return;
	}

int main(void)
{
	 setlocale(LC_ALL, "Portuguese");
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
mainhome:
     system("cls");
     printf("\t\t\t     SHOW DO MILHÃO\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t    SEJA BEM-VINDO");
     printf("\n\t\t\t         AO       ");
     printf("\n\t\t\t    SHOW DO MILHÃO ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\n\t\t     TORNE-SE UM MILIONÁRIO!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Pressione S p/ começar o jogo");
     printf("\n\t\t > Pressione V p/ ver a pontuação mais alta");
     printf("\n\t\t > Pressione R p/ resetar a pontuação");
     printf("\n\t\t > Pressione H p/ ajudar            ");
     printf("\n\t\t > Pressione Q p/ sair             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
    if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice == 'H')
	{
	help();
	getch();
	goto mainhome;
	}
	else if (choice == 'R')
	{
	reset_score();
	getch();
	goto mainhome;
	}
	else if (choice == 'Q')
	exit(1);
    else if( choice == 'S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegistre seu nome:");
     gets(playername);
	 playername[0] = toupper(playername[0]);

    system("cls");
    printf("\n ------------------  Bem-vindo, %s ao Show do milhão --------------------------",playername);
    printf("\n\n Aqui estão algumas dicas que você pode querer saber antes de jogar:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> Há 2 rodadas neste jogo, RODADA DE AQUECIMENTO E RODADA DESAFIO");
    printf("\n >> Na rodada de aquecimento, vai ser solicitado um total de 3 perguntas para testar os seus");
    printf("\n    conhecimentos gerais. Você é elegível para jogar o jogo, se você der pelo menos 2");
    printf("\n    respostas certas, caso contrário, você não pode prosseguir para a Rodada de Desafios.");
    printf("\n >> Seu jogo começa com a RODADA DESAFIO. Nesta rodada será pedido um");
    printf("\n    total de 10 questões. Cada resposta certa será premiada com $100.000!");
    printf("\n    Desta forma, você pode ganhar até um milhão de prêmio em dinheiro!!!!! ..........");
    printf("\n >> Você receberá 4 opções e você terá que pressionar A, B, C ou D para a");
    printf("\n    opção certa.");
    printf("\n >> Você será questionado continuamente, até que as respostas certas sejam dadas");
    printf("\n >> Sem marcação negativa para respostas erradas!");
    printf("\n\n\t!!!!!!!!!!!!! TUDO DE BOM !!!!!!!!!!!!!");
    printf("\n\n\n Pressione Y p/ começar o jogo\n");
    printf("\n Pressione qualquer outra tecla para retornar ao menu principal!");
    if (toupper(getch())=='Y')
		{
		goto home;
        }
	else
			{
			goto mainhome;
			system("cls");
			}

home:
     system("cls");
     count=0;
     for(i = 1; i <= 3; i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nO while e doWhile são um(a)...");
		printf("\n\nA.Estrutura de decisão\t\tB.Loop de repetição\n\nC.Quebra de linha\t\tD.Pseudocódigo\n\n");
		if (toupper(getch())=='B')
			{
				confirm_answer();
			    printf("\n\nCorreto!!!");
				count++;
			    getch();
			    break;
			}
		else
		       {
				confirm_answer();
		        printf("\n\nErrado!!! A resposta correta é B.Loop de repetição");
		        getch();
		       	break;
		       }

        case 2:
		printf("\n\n\nO que é 'Pseudocódigo'?");
		printf("\n\nA.Pseudocódigo é um método de descrever um processo ou escrever código de programação e algoritmos usando uma linguagem natural, como o inglês.\t\tB.Maneira rigorosa de raciocinar	\n\nC.Uma linguagem de programação\t\tD.Uma sequência de passos para atingir determinado objetivo\n\n");
		if (toupper(getch())=='A')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			count++;
			getch();
			break;
			}
		else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é A.Pseudocódigo é um método de descrever um processo ou escrever código de programação e algoritmos usando uma linguagem natural, como o inglês.");
				getch();
				break;
			   }

        case 3:
		printf("\n\n\nO que são arrays?");
		printf("\n\nA.São variáveis específicas para armazenamento de números inteiros\t\tB.Trata-se de uma forma de planejamento do algoritmo\n\nC.São formas de estruturar ou organizar dados na memória RAM do computador, de modo que você possa utilizar estes dados de uma forma mais eficiente\t\t\n\nD.São estruturas de dados homogêneas que possibilitam o armazenamento de grupos de valores do mesmo tipo, em uma única variável\n\n");
		if (toupper(getch())=='D')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			count++;
			getch();
			break;
			}
		else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é D. São estruturas de dados homogêneas que possibilitam o armazenamento de grupos de valores do mesmo tipo, em uma única variável");
		       	getch();
		      	break;
			   }

        /* case 4:
		printf("\n\n\nComo é chamado o envio indiscriminado de e-mail não solicitado para muitos usuários da internet e que também pode ser utilizado por ciber criminosos para difundir vírus de computador ou penetrar em sistemas?");
		printf("\n\nA.Worm\t\tB.Spamming\n\nC.Fishing\t\tD.Flaming\n\n");
		if (toupper(getch())=='B')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			count++;
			getch();
			break;
			}
		else
		       {
				printf("\n\nErrado!!! A resposta correta é B. Spamming");
		       	getch();
		       	break;
			   } */


		   }
		}

	if(count >= 2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nDESCULPE VOCÊ NÃO É ELEGÍVEL PARA JOGAR ESTE JOGO, MAIS SORTE DA PRÓXIMA VEZ");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** PARABÉNS, %s VOCÊ É ELEGÍVEL PARA O SHOW DO MILHÃO ***",playername);
     printf("\n\n\n\n\t!Pressione qualquer tecla para continuar!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for (i = 1 ; i <= 10; i++)
     {
	 system("cls");
     r = i;

     switch(r)
		{
		case 1:
		printf("\n\nQual dos grupos apresentados abaixo apresenta apenas paradigmas de programação?");
		printf("\n\nA.Algol, Basic, Lógico e Orientado a Objetos\t\tB.Imperativo, Programar, Lógico e Orientado a Objetos\n\nC.Imperativo, Funcional, Lógico e Orientado a Objetos\t\tD.Orientado a Objetos, Java, Imperativo e Lógico\n\n");
		if (toupper(getch())=='C')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			getch();
			}
		else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é C.Imperativo, Funcional, Lógico e Orientado a Objetos");
			   	getch();
		       	goto score;
		       	break;
			   }

		case 2:
		printf("\n\n\nO que significa concatenar?");
		printf("\n\nA.Unir dados de modo lógico ou manter ligação ou conexão entre eles\t\tB.Trata-se de um conjunto de caracteres\n\nC.Configurar o tipo de uma variável\t\tD.Dividir duas variáveis\n\n");
		if (toupper(getch())=='A')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
		else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é A.Unir dados de modo lógico ou manter ligação ou conexão entre eles");
			    getch();
		        goto score;
		        break;
		       }

        case 3:
		printf("\n\n\nOnde as variáveis ficam armazenadas?");
		printf("\n\nA.No programa/software\t\tB.Na memória RAM do computador\n\nC.No banco de dados\t\tD.No banco de dados, no software e na memória RAM\n\n");
		if (toupper(getch())=='B')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
		else
		        {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é B.Na memória RAM do computador");
				getch();
		      	goto score;
		       	break;
			    }

        case 4:
		printf("\n\n\nQual das alternativas representa um Sistema Computacional?(o que compõem um computador)");
		printf("\n\nA.Software de sistema, software operacional e hardware\t\tB.Componentes, circuitos eletrônicos e fios\n\nC.Peopleware, hardware e software.\t\tD.Mouse, teclado e tela de vídeo\n\n");
		if (toupper(getch())=='C')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
		else
		       {
				confirm_answer();
                printf("\n\nErrado!!! A resposta correta é C.Peopleware, hardware e software.");
				getch();
		       	goto score;
		       	break;
		       }

        case 5:
		printf("\n\n\nQual das alternativas representam softwares de aplicativo (utilitários)?");
		printf("\n\nA.Microsoft word, microsoft excel, Google Chrome, microsoft windows.\t\tB.Microsoft word, Mozilla Firefox, Microsoft excel, Google Chrome.\n\nC.Android, Linux, Solaris.\t\tD.Mac OS, Android, Mozilla Firefox.\n\n");
		if (toupper(getch())=='B')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
		else
		       {
				confirm_answer();
		        printf("\n\nErrado!!! A resposta correta é B.Microsoft word, Mozilla Firefox, Microsoft excel, Google Chrome.");
				getch();
				goto score;
				break;
		       }

		case 6:
		printf("\n\n\nQual alternativa apresenta apenas componentes externos de um computador?");
		printf("\n\nA.Processador, teclado, monitor, fonte\t\tB.Impressora, placa-mãe, placa de vídeo.,\n\nC.Caixa de som, teclado, mouse, impressora.\t\tD.Caixa de som, teclado, mouse, impressora, placa de vídeo.\n\n");
		if (toupper(getch())=='C' )
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
		else
		       {
				printf("\n\nErrado!!! A resposta correta é C.Caixa de som, teclado, mouse, impressora.");
				goto score;
		       	getch();
		      	 break;
			   }

        case 7:
		printf("\n\n\nQuem distribui a energia elétrica para todo computador?");
		printf("\n\nA.A fonte\t\tB.A placa-mãe\n\nC.O processador\t\tD.O estabilizador\n\n");
		if (toupper(getch())=='A')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
		else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é A. A fonte");
				getch();
				goto score;
				break;
			   }

        case 8:
		printf("\n\n\nQuem é o hardware responsável por processar os dados de entrada e transforma-los em dados de saída?");
        printf("\n\nA.A placa- mãe\t\tB.Mt. O HD (disco rígido)\n\nC.A memória RAM\t\tD.O processador (CPU ou UCP)\n\n");
        if (toupper(getch())=='D')
            {
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
        else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é D. Processador");
				getch();
				goto score;
		       	break;
			   }

        case 9:
		printf("\n\n\nA CPU (Unidade central de processamento) engloba a ULA (unidade lógica e aritmética) e a UC(Unidade de controle), podendo possuir também outros componentes para conexões de dispositivos extras.");
		printf("\n\nA.Verdadeiro\t\tB.Falso\n\n");
		if (toupper(getch())=='A')
			{
			confirm_answer();
			printf("\n\nCorreto!!!");
			countr++;
			getch();
			break;
			}
		else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é A. Verdadeiro");getch();
		        goto score;
		        break;
				}

        case 10:
		printf("\n\n\nA memoria ROM armazena programas, sistemas, processos abertos, só enquanto o computador está ligado.");
		printf("\n\nA.Verdadeiro\t\tB.Falso\n\n");
		if (toupper(getch())=='A')
			 {
			 confirm_answer();
			 printf("\n\nCorreto!!!");
			 countr++;
			 getch();
			 break;
			 }
		else
		       {
				confirm_answer();
				printf("\n\nErrado!!! A resposta correta é A. Verdadeiro");
			   	getch();
			  	break;
			   	goto score;
			   }


			}
		 }

	score:
    system("cls");
	score = (float)countr * 100000;
	if (score > 0.00 && score < 1000000)
	{
	   	printf("\n\n\t\t**************** PARABÉNS, %s *****************", toupper(playername));
		printf("\n\t Você ganhou $%.2f",score);
		goto go;
	}

	 else if(score==1000000.00)
		{
	    printf("\n\n\n \t\t**************** PARABÉNS, %s ****************", toupper(playername));
	    printf("\n\t\t\t\t VOCÊ É UM MILIONÁRIO!!!!!!!!!");
	    printf("\n\t\t VOCÊ GANHOU $%.2f",score);
	    printf("\t\t Obrigado!!");
		}
	 else
		{
		printf("\n\n\t******** DESCULPE, %s VOCÊ NÃO GANHOU DINHEIRO :( ********", toupper(playername));
	    printf("\n\t\t Agradecemos a sua participação.");
	    printf("\n\t\t TENTAR NOVAMENTE");
		goto go;
		}

	go:
	puts("\n\n Pressione Y se quiser jogar o próximo jogo");
	puts("Pressione qualquer tecla se quiser ir ao menu principal");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score, playername);
		goto mainhome;
		}
	}
}

	void show_record(void)
		{
		system("cls");
		char name[20];
		float scr;
		FILE *f;
		f=fopen("score.txt","r");
		fscanf(f,"%s%f", &name, &scr);
		printf("\n\n\t\t*************************************************************");
		printf("\n\n\t\t %s garantiu a pontuação mais alta; %0.2f",name,scr);
		printf("\n\n\t\t*************************************************************");
		fclose(f);
		getch();
		}

	void reset_score(void)
		{
		system("cls");
		float sc;
		char nm[20];
		FILE *f;
		f=fopen("score.txt","r+");
		fscanf(f,"%s%f",&nm,&sc);
		sc=0;
		fprintf(f,"%s,%.2f",nm,sc);
		fclose(f);
		}

	void help(void)
		{
		system("cls");
		printf("\n --------------------------  AJUDA --------------------------");
		printf("\n ------------------------------------------------------------");
		printf("\n >> Há 2 rodadas neste jogo, RODADA DE AQUECIMENTO E RODADA DESAFIO");
		printf("\n >> Na rodada de aquecimento, vai ser solicitado um total de 3 perguntas para testar os seus");
		printf("\n    conhecimentos gerais. Vocé é elegível para jogar o jogo se você der pelo menos 2");
		printf("\n    respostas certas, caso contrário, você não pode prosseguir para a Rodada de Desafios.");
		printf("\n >> Seu jogo começa com RODADA DESAFIO. Nesta rodada será pedido um");
		printf("\n    total de 10 questões. Cada resposta certa será premiada com $100.000!");
		printf("\n    Desta forma, você pode ganhar até um milhão de prêmio em dinheiro!!!!! ..........");
		printf("\n >> Você receberá opções e você terá que pressionar A, B, C ou D para a");
		printf("\n    opção certa.");
		printf("\n >> Você será questionado continuamente, até que as respostas certas sejam dadas");
		printf("\n >> Sem marcação negativa para respostas erradas!");
		printf("\n\n\t!!!!!!!!!!!!! TUDO DE BOM !!!!!!!!!!!!!");
		}

	void edit_score(float score, char plnm[20])
		{
		system("cls");
		float sc;
		char nm[20];
		FILE *f;
		f=fopen("score.txt","r");
		fscanf(f,"%s%f",&nm,&sc);
		if (score >= sc)
			{
			sc=score;
			fclose(f);
			f=fopen("score.txt","w");
			fprintf(f,"%s\n%.2f",plnm,sc);
			fclose(f);
			}

		}

	void confirm_answer(void);
