#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()  //AS VARIAVEIS SERAO ORGANIZADAS EM RELAÇÃO  A ORDEM DE QUESTOES, EXEMPLO : QUESTAO 1 : VARIAVEL 1 E 2, QUESTAO 2 : VARIAVEL 3 E 4
{
	char nome[10]; //VARIAVEIS DO INICIO DO PROGRAMA
	int escolha;
	int parte;
	
	int nmr1 = 30; //VARIAVEIS 2 QUESTAO
	int nmr2 = 27;
	int multiplicacao;	
	
	float nmr3 = 5; //VARIAVEIS 3 QUESTAO
	float nmr4 = 8;
	float nmr5 = 12;
	float calculo; 

	int nmr6;  //VARIAVEIS 4 QUESTAO

	float nmr7; //VARIAVEIS  5 QUESTAO

	int nmr8; //VARIAVEIS 6 QUESTAO
	int antes;
	int depois;
	
	char nome2[25]; //VARIAVEIS 7 QUESTAO
	char endereco[30];
	int nmrcelular;
	
	int nmr9; //VARIVEIS 8 QUESTAO
	int nmr10;
	int subtracao;
	
	float nmr11;//VARIAVEIS 9 QUESTAO
	float divisao;
	
	float nmr12; //VARIAVEIS 10 QUESTAO
	float nmr13;
	float nmr14;
	float calculodiv; 
	
	float nmr15; //VARIAVEIS 11 QUESTAO
	float nmr16;
	float somaa;
	float subtracaoo;
	float mult;
	float divi;	
	
	float nmr17; //VARIAVEIS 12 QUESTAO
	float quadrado;
	
	float nmr18; //VARIAVEIS 13 QUESTAO
	float reajuste;
	char nome3[10];
	
	float nmr19; //VARIAVEIS 14 QUESTAO
	float nmr20;
	float perimetro;
	float area;
	
	float nmr21; //VARIAVEIS 15 QUESTAO
	float desconto;
	float calc1;
	float calc2;
	
	char nome4[15]; //VARIAVEIS 16 QUESTAO
	float salarioatual;
	float ajuste;
	
	char nome5[15]; //VARIAVEIS 17 QUESTAO
	float celsius;
	float fahrenheint;
	float formulaF;
	
	char nome6[16]; //VARIAVEIS 18 QEUSTAO
	float tempo;
	float velocidademedia;
	float combustivel;
	float distanciapercorrida;
	
	char nome7[16]; //VARIAVEIS 19 QUESTAO
	float valor; 
	float valorjuros;
	int taxaperiodica;
	int meses;


	float dolar; //VARIAVEIS 20 QUESTAO
	float conversao;
	
	int valor1; //VARIAVEIS 21 QUESTAO
	int valor2;
	int soma;
	
	int valorum; //VARIAVEIS 22 QUESTAO
	int valordois;
	int adicao;
	int adicao2;
	int sub;
	
	int nmr22;  //VARIAVEIS 23 QUESTAO
	
	int nmr23; //VARIAVEIS 24 QUESTAO
	
	int nmr24; //VARIAVEIS 25 QUESTAO
	
	char nome8[20]; //VARIAVEIS 26 QUESTAO
	float salariobruto;
	int prestacao;
	float calculoprestacao;
	float prestacaocalc;
	
	int nmr25; //VARIAVEIS 27 QUESTAO
	
	int nmr26; //VARIAVEIS 28 QUESTAO
	
	int nmr27; //VARIAVEIS 29 QUESTAO
	int calcidade;
	int anoatual;
	char nome9[20];
	
	int nmr28; //VARIAVEIS 30 QUESTAO
	int nmr29;
	int nmr30;
	
	int nmr31; //VARIAVEIS 31 QUESTAO
	int nmr32;
	int nmr33;
	int maior;
	int menor;
	
	int idadepessoa; //VARIAVEIS 32 QUESTAO
	char nome10[20];
	
	char nome11[20]; //VARIAVEIS 33 QUESTAO
	float n1;
	float n2;
	float mdia;
	
	char nome12[20]; //VARIAVEIS 34 QUESTAO
	float slario;
	float descontoum;
	float descontodois;
	float descontotres;
	
	char nome13[20]; //VARIAVEIS 35 QUESTAO
	float vlorcompra;
	float vendum;
	float venddois;
	
	int idadeatleta; //VARIAVEIS 36 QUESTAO
	
	char nome14[20]; //VARIAVEIS 37 QUESTAO
	int idadeplano;
	
	int nmrmes; //VARIAVEIS 38 QUESTAO
	
	int player1; //VARIAVEIS 39 QUESTAO
	int player2;
	int player3;
	int mediaplayers;
	int somaplayers;
	
	float saldomediocliente; //VARIAVEIS 40 QUESTAO
	float porcentagemsaldo1;
	float porcentagemsaldo2;
	float porcentagemsaldo3;
	
	char nome15[15]; //VARIAVEIS 41 QUESTAO
	char nomedolivro[100];
	int escolhaprofaluno;
	int diastotais;
	
	char nome16[20]; //VARIAVEIS 42 QUESTAO
	int tipodecarro;
	float percursoemkm;
	float calculogasolina;
	float calculogasolina2;
	float calculogasolina3;
	
    int escolhapratoss; //VARIAVEIS 43 QUESTAO
    int confirmarpratos;
	int calculopratos1;
	int calculopratos2;
	int calculopratos3;
	int calculopratos4;
	
	int numeracaoplaca; //VARIAVEIS 44 QUESTAO
	int calculoplaca;
	
	 

	
			printf(" \n Ola, poderia me informar o seu primeiro nome ? \t");
			scanf("%s", &nome);
			printf("  \n Ola, %s, seja bem vindo(a)", nome);
			printf(" \n Clique ENTER para continuar");
			getch();
			printf("\n");
			printf(" \n Essa e a minha lista de exercicios de 45 questoes");
			printf(" \n Me chamo Thauan, espero que goste :)");
			printf("\n");	
			
    do { 
			printf(" \n Qual questao voce gostaria de ver ? \t");
			scanf("%d", &escolha);
			
			switch(escolha)
			{
				case 1:
				//Questão 1 			
				printf(" \n                ATIVIDADES LISTA                  ");
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 1                     \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, %s, tudo bem ? \n", nome);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();
				break; 
				
				case 2:
				//Questao 2
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 2                    \n");
				printf(" \n ===============================================\n");
				printf(" \n O produto entre 2 numeros, e nada mais nada menos que,\n\n o resultado de sua multiplicacao. \n");
				printf(" \n Clique ENTER para continuar \n");
				getch();
				multiplicacao = (nmr1*nmr2);
				printf("\n Como exemplo temos o numero %d e o numero %d", nmr1, nmr2);
				printf("\n O produto desses 2 numeros  e igual a %d \n", multiplicacao);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch(); 
				break; 
				
				case 3:	
				//Questao 3				
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 3                    \n");
				printf(" \n ===============================================\n");
				printf(" \n A media aritmetica, e entendida como a soma entre determinados numeros,\n\n dividido pela quantidade de numeros que se tem \n");
				printf(" \n Clique ENTER para continuar \n");
				getch();
				calculo = (nmr3+nmr4+nmr5)/3;
				printf(" \n A media aritmetica entre os numeros %.0f, %.0f e %.0f", nmr3, nmr4, nmr5);
				printf(" \n E igual a %.2f", calculo);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				case 4:
				//Questao 4				
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 4                    \n");
				printf(" \n ===============================================\n");	
				printf(" \n Ola, por favor, digite um numero inteiro : \t");
				scanf("%d", &nmr6 );
				printf(" \n Percebi que o numero digitado e %d", nmr6);
				printf("\n");
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();
				break;
				
				
				case 5:
				//Questao 5
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 5                    \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, por favor, digite um numero real,\n\n Lembre-se que qualquer numero inteiro ou decimal\n\n pertence tambem a esse conjunto.  \t");
				scanf("%f", &nmr7);
				printf(" \n Percebi que o numero digitado e %.2f", nmr7);
				printf("\n");
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();
				break;
					
				
				case 6:
				//Questao 6				
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 6                    \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite um numero inteiro \t");
				scanf("%d", &nmr8);
				antes = (nmr8-1);
				depois = (nmr8+1);
				printf(" \n De acordo com o numero digitado : %d\n\n o seu antecessor e %d e o seu sucessor e %d", nmr8, antes, depois);	
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();			
				break;
				
				
				case 7:
				//Questao 7
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 7                    \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, seja bem vindo(a) a CENTRAL DA VIVO\n\n Por favor, digite o seu primeiro nome : \t");
				scanf("%s", &nome2);
				
				printf(" \n Digite o seu endereco (BAIRRO APENAS) Bairro : \t");
				scanf("%s", &endereco);
				
				printf(" \n Digite o seu numero de celular : \t");
				scanf("%d", &nmrcelular);
				
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf(" \n\n %s, sua visita no endereco %s\n \n esta agendada para o dia 01/11/2021.\n\n Entraremos em contato pelo seu numero %d", nome2, endereco, nmrcelular);
				printf(" \n Obrigado :)");
				getch();
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();			
				break;	
				
				
				case 8:
				//Questao 8
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 8                    \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, digite um numero inteiro : \t");
				scanf("%d", &nmr9);
				printf(" \n Digite outro numero inteiro : \t");
				scanf("%d", &nmr10);
				subtracao = (nmr9-nmr10);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Apos os calculos, percebemos que\n\n O numero %d menos o numero %d e igual a %d", nmr9, nmr10, subtracao);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();			
				break;
				
				
				case 9:
				//Questao 9
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 9                    \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite um numero real \t");
				scanf("%f", &nmr11);
				divisao = (nmr11/4);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Apos analise, percebemos que \n\n 1 / 4 (UM QUARTO) de %.1f e igual %.1f", nmr11, divisao);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();			
				break;			
				
				
				case 10:
				//Questao 10
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 10                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o primeiro numero real \t ");
				scanf("%f", &nmr12);
				
				printf(" \n Digite o segundo numero real \t ");
				scanf("%f", &nmr13);
				
				printf(" \n Digite o terceiro numero real \t ");
				scanf("%f", &nmr14);
				
				printf(" \n Clique ENTER para continuar \n");
				getch();
				
				calculodiv = (nmr12+nmr13+nmr14)/3;
				
				printf(" \n A media aritmetica entre os numeros %.2f, %.2f e %.2f", nmr12, nmr13, nmr14);
				printf(" \n E igual a %.2f", calculodiv);
				printf("\n");
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 11:
				//Questao 11
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 11                   \n");
				printf(" \n ===============================================\n");
				
				printf(" \n Digite o primeiro numero \t");
				scanf("%f", &nmr15);
				printf(" \n Digite o segundo numero \t");
				scanf("%f", &nmr16);
				
				somaa = (nmr15+nmr16);
				subtracaoo == (nmr15-nmr16);
				mult = (nmr15*nmr16);
				divi = (nmr15/nmr16);
				
				printf(" \n O resultado da soma entre\n\n %.2f e %.2f e igual a %.2f", nmr15, nmr16, somaa);
				printf("\n");
				printf(" \n O resultado da subtracao entre\n\n %.2f e %.2f e igual a %.2f", nmr15, nmr16, subtracaoo);
				printf("\n");
				printf(" \n O resultado da multiplicacao entre\n\n %.2f e %.2f e igual a %.2f", nmr15, nmr16, mult);
				printf("\n");
				printf(" \n O resultado da divisao entre\n\n %.2f e %.2f e igual a %.2f", nmr15, nmr16, divi);
				printf("\n");
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 12:
				//Questao 12
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 12                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite um numero real \t");
				scanf("%f", &nmr17);
				quadrado = (nmr17*nmr17);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Apos analisar o numero %.0f percebemos\n\n que o seu quadrado e igual a %.0f", nmr17, quadrado);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 13:
				//Questao 13
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 13                   \n");
				printf(" \n ===============================================\n");				
				printf(" \n Ola, bem vindo(a) a sua conta poupanca \n");
				printf(" \n Digite o seu nome para continuar :) \t");
				scanf("%s", &nome3);
				printf(" \n Boas noticias, %s, iremos realizar um reajuste de 2%% \n em todos os saldos das contas poupanca", nome3);
				printf("\n");
				printf(" \n Clique ENTER para continuar");
				getch();
				printf("\n");			
				printf(" \n Digite o seu saldo que consta na poupanca R$ \t");
				scanf("%f", &nmr18);
				reajuste = (nmr18*0.02)+nmr18;
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n %s, de acordo com o seu saldo no valor de %.2f\n\n Com o reajuste de 2%% ele passa a ser no valor de R$ %.2f", nome3, nmr18, reajuste);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;	
				
				
				case 14:
				//Questao 14
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 14                   \n");
				printf(" \n ===============================================\n");	
				printf(" \n                ==================                \n");
				printf(" \n                =                =  altura        \n");
				printf(" \n                =                = 	             \n");
				printf(" \n                ==================                \n");
				printf(" \n                       base                       \n");
				printf("\n");
				printf(" \n Digite o valor correspondente a base do retangulo \t");
				scanf("%f", &nmr19);
				printf(" \n Digite o valor correspondente a altura do retangulo \t");
				scanf("%f", &nmr20);
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf(" \n Lembre-se que, o (perimetro) e a soma de todos os lados");
				printf(" \n E a (area) e a base multiplicado com a altura");
				printf("\n");
				perimetro = (nmr19+nmr19)+(nmr20+nmr20);
				area = (nmr19*nmr20);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n                ==================                \n");
				printf(" \n                =                =  %.2f          \n", nmr20);
				printf(" \n                =                = 	             \n");
				printf(" \n                ==================                \n");
				printf(" \n                       %.2f                       \n", nmr19);
				printf("\n");
				printf(" \n De acordo com a base no valor de %.2f e a altura no valor de %.2f\n O perimetro (Soma de todos os lados) e igual a %.2f", nmr19, nmr20, perimetro);
				printf("\n");
				printf(" \n De acordo com a base no valor de %.2f e a altura no valor de %.2f\n A area (Base vezes altura) e igual a %.2f", nmr19, nmr20, area);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;	
				
				
				case 15:
				//Questao 15
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 15                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, seja bem vindo(a) ao SuperMarket \n");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Digite o valor do produto R$ \t ");
				scanf("%f", &nmr21);
				printf(" \n Digite o valor do desconto desejado %% \t");
				scanf("%f", &desconto);
				printf("\n");
				calc1=nmr21-(desconto/100)*(nmr21);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n De acordo com o valor do produto %.2f\n\n E de acordo com o valor do desconto %.0f%%", nmr21, desconto);
				printf("\n");
				printf(" \n\n O novo valor do produto sera de R$ %.2f \n", calc1);				
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 16:
				//Questao 16
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 16                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, seja bem vindo a Microsoft");
				printf(" \n Digite o seu nome por favor :) \t");
				scanf("%s", &nome4);
				printf(" \n Ola, %s, seja bem vindo(a)", nome4);
				printf(" \n Iremos realizar um reajuste de 30%% no seu salario\n\n Clique ENTER para continuar e concordar \t");
				getch();
				printf("\n");
				printf(" \n Digite o seu salario atual %s \t", nome4);
				scanf("%f", &salarioatual);
				ajuste = salarioatual+(salarioatual*0.3);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Apos analise de seu salario atual no valor de R$ %.2f\n\n Com o reajuste de 30%% o seu salario\n\n passa a ser no valor de R$ %.2f", salarioatual, ajuste);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 17:
				//Questao 17
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 17                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Conversor de graus Celsius para graus Fahrenheint");
				printf(" \n Ola, tudo bem ?, como voce se chama ? \t");
				scanf("%s", &nome5);
				printf(" \n Ola, %s, seja bem vindo(a)", nome5);
				printf(" \n Hoje, iremos converter graus Celsius (C) para graus Fahrenheint (F)");
				printf(" \n Digite o valor correspondente a grau Celsius (C) \t");
				scanf("%f", &celsius);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");			
				formulaF = (9*celsius+160) / 5;
				printf(" \n        FORMULA DE CONVERSAO PARA FAHRENHEINT    ");
				printf("\n");
				printf(" \n                     9 x %.1f + 16                   ", celsius);
				printf(" \n              F =  ----------------               ");
                printf(" \n                           5                      ");
                printf(" \n De acordo conversao chegamos a conclusao que\n\n C %.1f (Celsius) corresponde a F %.1f (Fahrenheint)", celsius, formulaF);
				printf(" \n ===============================================\n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 18:
				//Questao 18
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 18                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, qual e o seu nome ? \t");
				scanf("%s", &nome);
				printf(" \n Seja bem-vindo(a), %s !!!", nome);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Por favor, digite o tempo decorrido da sua viagem");
				printf(" \n PARA HORAS DIGITE (EXEMPLO : 5,20) PARA EVITAR ERROS NO SISTEMA \t");
				scanf("%f", &tempo);
				printf("\n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				printf("\n");
				getch();
				printf("\n");
				printf(" \n Por favor, digite a velocidade media\n\n que voce estava na viagem");
				printf(" PARA QUILOMETROS DIGITE (EXEMPLO : 2,2)\n\n PARA EVITAR ERROS NO SISTEMA \t");
				scanf("%f", &velocidademedia);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				distanciapercorrida = (tempo/velocidademedia);
				combustivel = (distanciapercorrida/12);
				printf(" \n %s, apos analise, chegamos a conclusao que :", nome);
				printf(" \n A distancia percorrida durante a sua viagem foi de %.2f quilometros", distanciapercorrida);
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf(" \n A quantidade de litros de combustivel gastos durante a viagem foram de %.2f litros", combustivel);		
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 19:
				//Questao 19
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 19                   \n");
				printf(" \n ===============================================\n");
				printf(" \n        DIVIDAS SERASA - CARTAO DE CREDITO      \n");
				printf(" \n Lembre-se que, serao cobradas taxas de R$ 100,00 POR MES");
				printf(" \n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Por favor, digite o seu nome \t");
				scanf("%s", &nome);
				printf(" \n Digite o valor atual da sua divida %s. R$ \t", nome);
				scanf("%f", &valor);
				printf(" \n Digite a quantidade de meses da sua divida \t");
				scanf("%d", &meses);
				taxaperiodica = (meses*100);
				valorjuros = (valor+taxaperiodica);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf("\n Como atribuido, taxa de R$ 100 a partir do mes da divida");
				printf(" \n De acordo com o valor atual da sua divida");
				printf(" \n No valor de R$ %.2f", valor);
				printf("\n");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n De acordo com o atraso de %d meses", meses);
				printf(" \n Clique ENTER para continuar \t");
				getch();		
				printf("\n");				
				printf(" \n Conclui-se que o valor atual da sua divida\n\n Com o acrescimo de R$ 100 durante %d meses\n\n Esta no valor de R$ %.2f", meses, valorjuros);
				printf(" \n Lembre-se de pagar, caso  contrario, sua divida ira aumentar!!!");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 20:
				//Questao 20
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 20                   \n");
				printf(" \n ===============================================\n");				
				printf(" \n           CONVERSOR DOLAR PARA REAL            \n");
				printf("\n Por favor, digite o valor em dolar U$ \t");
				scanf("%f", &dolar);
				printf(" \n Clique ENTER para continuar \t");
				printf(" \n Processando...");
				getch();
				printf("\n");
				printf(" \n COTACAO ATUAL DO DOLAR : R$ 5.54 REAL BRASILEIRO");
				getch();
				conversao = (dolar*5.54);
				printf("\n");
				printf(" \n De acordo com o valor lido em dolar americano");
				printf(" \n E  de acordo com a cotacao atual do dolar");
				printf(" \n Convertendo U$ %.2f para real brasileiro obtemos R$ %.2f", dolar, conversao);
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 21:
				//Questao 21
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 21                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o primeiro valor inteiro \t");
				scanf("%d", &valor1);
				printf(" \n Digite o segundo valor inteiro \t");
				scanf("%d", &valor2);
				soma = (valor1+valor2);
				if(soma>10)
				{
					printf(" \n O somatorio de %d e %d e igual a %d, que e maior que 10", valor1, valor2, soma);	
				}
				
			 	else
				{
					printf(" \n O somatorio de %d e %d e igual a %d, que e menor que 10", valor1, valor2, soma);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 22:
				//Questao 22
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 22                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o primeiro valor inteiro \t");
				scanf("%d", &valorum);
				printf(" \n Digite o segundo valor inteiro \t");
				scanf("%d", &valordois);
				adicao = (valorum+valordois);
				if(adicao>20)
				{
					adicao2 = (adicao+8);
					printf(" \n O somatorio de %d e %d e igual a %d, que e maior que 20", valorum, valordois, adicao);
					printf(" \n A partir da regra desse programa, %d + 8 e igual a %d", adicao, adicao2);	
				}
				
				else
				{
					sub = (adicao-5);
					printf(" \n O somatorio de %d e %d e igual a %d, que e menor que 20", valorum, valordois, adicao);
					printf(" \n A partir da regra desse programa, %d - 5 e igual a %d", adicao, sub);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				case 23:
				//Questao 23
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 23                   \n");
				printf(" \n ===============================================\n");								
				printf(" \n Digite um numero inteiro \t");
				scanf("%d", &nmr22);		
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(nmr22 % 3==0)
				{
					printf(" \n O numero %d e multiplo de 3", nmr22);
				}		
				else
				{
					printf(" \n O numero %d nao e multiplo de 3", nmr22);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 24:
				//Questao 24
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 24                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite um numero inteiro \t");
				scanf("%d", &nmr23);						
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(nmr23 % 5==0)
				{
					printf(" \n O numero %d e divisivel por 5", nmr23);
				}		
				else
				{
					printf(" \n O numero %d nao e divisivel por 5", nmr23);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 25:
				//Questao 25
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 25                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o numero inteiro \t");
				scanf("%d", &nmr24);						
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(nmr24 % 3==0 && nmr24 % 7==0)
				{
					printf(" \n O numero %d e divisivel por 3 e por 7", nmr24);
				}		
				else
				{
					printf(" \n O numero %d nao e divisivel por 3 e por 7", nmr24);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 26:
				//Questao 26
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 26                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, por favor, digite o seu nome \t");
				scanf("%s", &nome8);
				printf("\n Ola, %s, seja bem-vindo(a).", nome8);
				printf("\n Nossa linha de credito podera te fornecer um emprestimo\n caso a prestacao digitada seja menor ou igual a 30%% do seu salario bruto");																			
				printf("\n");
				printf(" \n Por favor, digite o valor correspondente\n ao seu salario bruto \t");
				scanf("%f", &salariobruto);
				printf("\n");
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf(" \n Digite o valor correspondente a prestacao (MAXIMO 100) \t");
				scanf("%d", &prestacao);
				prestacaocalc = (prestacao/100)*salariobruto;
				calculoprestacao = (0.3*salariobruto);
				printf("\n");
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				if(prestacaocalc>=calculoprestacao)
				{
					printf(" \n De acordo com o seu salario bruto no valor de R$ %.2f", salariobruto);
					printf(" \n De acordo com o valor da prestacao digitado no valor de %d %%", prestacao);
					printf(" \n Clique ENTER para continuar...");
					getch();
					printf("\n");
					printf(" \n Apos analise, percebemos que o valor da prestacao\n digitado e maior ou igual a 30%% de seu salario bruto %.2f", calculoprestacao);
					printf(" \n EMPRESTIMO NEGADO");
				}
				else
				{
					printf(" \n De acordo com o seu salario bruto no valor de R$ %.2f", salariobruto);
					printf(" \n De acordo com o valor da prestacao digitado no valor de %d %%", prestacao);
					printf(" \n Clique ENTER para continuar...");
					getch();
					printf("\n");
					printf(" \n Apos analise, percebemos que o valor da prestacao\n digitado e menor ou igual a 30%% de seu salario bruto %.2f", calculoprestacao);	
					printf(" \n EMPRESTIMO ACEITO");
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 27:
				//Questao 27
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 27                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o numero inteiro \t");
				scanf("%d", &nmr25);
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(nmr25 >=20 && nmr25<=50)
				{
					printf(" \n O numero %d esta entre 20 e 50", nmr25);
				}		
				else
				{
					printf(" \n O numero %d nao  esta entr 20 e 50", nmr25);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;	
				
				
				case 28:
				//Questao 28
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 28                   \n");
				printf(" \n ===============================================\n");							
				printf(" \n Digite o numero inteiro \t");
				scanf("%d", &nmr26);
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(nmr26 >20)
				{
					printf(" \n O numero %d e maior que 20", nmr26);
				}		
				if (nmr26<20)
				{
					printf(" \n O numero %d e menor que 20", nmr26);
				}
				if(nmr26==20)
				{
					printf("\n O numero %d e igual a 20", nmr26);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 29:
				//Questao 29
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 29                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Por favor, digite o seu nome \t");
				scanf("%s", &nome9);
				printf(" \n Ola, %s, seja bem-vindo(a)", nome);
				printf("\n Clique ENTER para continuar");
				getch();	
				printf("\n");			
				printf(" \n Digite o ano atual (EXEMPLO : 2021) \t");
				scanf("%d", &anoatual);
				printf(" \n Digite o ano de seu nascimento \t");
				scanf("%d", &nmr27);
				calcidade = (anoatual-nmr27);
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				if(nmr27<=1899)
				{
					printf(" \n Por favor, digite uma data de nascimento valida");
				}
				if(anoatual<=1899)
				{
					printf(" \n Por favor, digite um ano atual valido");
				}
				else
				{
					printf(" \n %s, analisamos que sua idade e %d", nome9, calcidade);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				case 30:
				//Questao 30
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 30                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o primeiro numero inteiro \t");
				scanf("%d", &nmr28);
				printf(" \n Digite o segundo numero inteiro \t");
				scanf("%d", &nmr29);
				printf(" \n Digite o terceiro numero inteiro \t");
				scanf("%d", &nmr30);
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if (nmr28 > nmr30) 
				{
				    int meio = nmr30;
				    nmr30 = nmr28;
				    nmr28 = meio;
				}
				if (nmr28 > nmr29)
				{
					int meio = nmr29;
				    nmr29 = nmr28;
				    nmr28 = meio;
				}
				if (nmr29 > nmr30)
				{
				    int meio = nmr30;
				    nmr30 = nmr29;
				    nmr29 = meio;
				}
				printf(" \n A ordem crescente dos numeros digitados e %d %d %d", nmr28, nmr29, nmr30);
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 31:
				//Questao 31
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 31                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o primeiro numero inteiro \t");
				scanf("%d", &nmr31);
				printf(" \n Digite o segundo numero inteiro \t");
				scanf("%d", &nmr32);	
				printf(" \n Digite o terceiro numero inteiro \t");
				scanf("%d", &nmr33);
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if (nmr31>nmr32 && nmr31>nmr33)
				{
					maior=nmr31;	
				}
				if (nmr32>nmr31 && nmr32>nmr33)
				{	
					maior=nmr32;		
				}
				if (nmr33>nmr31 && nmr33>nmr32)
				{
					maior=nmr33;
				}
				printf(" \n Os numeros digitados foram %d, %d e %d", nmr31, nmr32, nmr33);
				printf("\n E o maior numero deles e %d", maior);
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 32:
				//Questao 32
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 32                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, por favor, digite o seu nome \t");
				scanf("%s", &nome10);
				printf(" \n Ola, %s, seja bem-vindo(a)", nome10);
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf(" \n Por favor, %s, digite a sua idade \t", nome10);
				scanf("%d", &idadepessoa);
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(idadepessoa>18 && idadepessoa>65)
				{
					printf(" \n Apos analise %s, percebemos que a sua idade e %d\n\n Que e maior que 65 anos e voce e maior de idade", nome, idadepessoa);
				}										
				if(idadepessoa<18)
				{
					printf(" \n Apos analise %s, percebemos que a sua idade e %d\n\n Voce e menor de idade", nome, idadepessoa);
				}
				if(idadepessoa>18 && idadepessoa<65)
				{
					printf(" \n Apos analise %s, percebemos que a sua idade e %d\n\n Que e menor que 65 anos e voce e maior de idade", nome, idadepessoa);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 33:
				//Questao 33
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 33                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, digite o seu nome por favor \t");
				scanf("%s", &nome11);
				printf(" \n Ola, %s, seja bem-vindo(a)", nome11);
				printf("\n");
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Digite a sua primeira nota \t");
				scanf("%f", &n1);
				printf(" \n Digite a sua segunda nota \t");
				scanf("%f", &n2);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				mdia = (n1+n2)/2;
				if(mdia>=7)
				{
					printf(" \n %s, de acordo com a sua primeira nota %.2f\n\n De acordo com a sua segunda nota %.2f\n\n Com media igual a %.2f, voce foi APROVADO",nome11, n1, n2, mdia);	
				}
				if(mdia<=3)
				{
					printf(" \n %s, de acordo com a sua primeira nota %.2f\n\n De acordo com a sua segunda nota %.2f\n\n Com media igual a %.2f, voce foi REPROVADO",nome11, n1, n2, mdia);	
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;


				case 34:
				//Questao 34
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 34                   \n");
				printf(" \n ===============================================\n");
				printf(" \n                           TABELA GUIA PARA DESCONTOS INSS                      \n");
				printf(" \n                  Salario                                    Faixa de desconto  \n");             
				printf(" \n          Menor ou igual a R$ 600.00                                Isento      \n");
				printf(" \n  Maior que R$ 600.00 e menor ou igual a R$ 1200.00                  20%%       \n");
				printf(" \n Maior que R$ 1200.00 e menor ou igual a R$  2000.00                 25%%       \n");
				printf(" \n            Maior que R$ 2000.00                                     30%%       \n");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");															
				printf(" \n Digite o seu nome por favor : \t");
				scanf("%s", &nome12);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Ola, %s, seja bem-vindo(a)", nome12);
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Digite o seu salario atual %s R$ \t", nome12);
				scanf("%f", &slario);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(slario<=600)
				{
					printf(" \n %s, como o seu salario e %.2f \n\n Voce esta isento da taxa de desconto", nome12, slario);
				}
				if(slario>600 && slario<=1200)
				{
					descontoum = slario-(0.2*slario);
					printf(" \n %s, como o seu salario e %.2f \n\n O seu salario com um desconto de 20%% e igual a %.2f", nome12, slario, descontoum);
				}
				if(slario>1200 && slario<=2000)
				{
					descontodois = slario-(0.25*slario);
					printf(" \n %s, como o seu salario e %.2f \n\n O seu salario com um desconto de 25%% e igual a %.2f", nome12, slario, descontodois);
				}
				if(slario>2000)
				{
					descontotres = slario-(0.3*slario);
					printf(" \n %s, como o seu salario e %.2f \n\n O seu salario com um desconto de 30%% e igual a %.2f", nome12, slario, descontotres);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 35:
				//Questao 35
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 35                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o seu nome por favor : \t");
				scanf("%s", &nome13);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Ola, %s, seja bem-vindo(a)", nome13);
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Digite o valor do produto comprado %s R$ \t", nome13);
				scanf("%f", &vlorcompra);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(vlorcompra<20)
				{
					vendum = vlorcompra+(0.45*vlorcompra);
					printf(" \n %s como o produto comprado foi no valor de R$ %.2f\n\n O valor da revenda sera de R$ %.2f", nome13, vlorcompra, vendum);
				}				
				
				if(vlorcompra>20)
				{
					vendum = vlorcompra+(0.3*vlorcompra);
					printf(" \n %s como o produto comprado foi no valor de R$ %.2f\n\n O valor da revenda sera de R$ %.2f", nome13, vlorcompra, venddois);
				}	
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 36:
				//Questao 36
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 36                   \n");
				printf(" \n ===============================================\n");
				printf(" \n                               TABELA CATERGORIAS NATACAO                     \n");
				printf(" \n                  Categoria                                   Faixa etaria    \n");             
				printf(" \n                  Infantil A                                  05 A 07 ANOS    \n");
				printf(" \n                  INFANTIL B                                  08 A 10 ANOS    \n");
				printf(" \n                  JUVENIL  A                                  11 A 13 ANOS    \n");
				printf(" \n                  JUVENIL  B                                  14 A 17 ANOS    \n");
				printf(" \n                    SENIOR                                 MAIORES DE 18 ANOS \n");				
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Digite a sua idade : \t");
				scanf("%d", &idadeatleta);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(idadeatleta>=5 && idadeatleta<=7)
				{
					printf(" \n Ola atleta, voce esta na categoria INFANTIL A");
					printf(" \n Boa sorte ;)");
				}
				if(idadeatleta>=8 && idadeatleta<=10)
				{
					printf(" \n Ola atleta, voce esta na categoria INFANTIL B");
					printf(" \n Boa sorte ;)");
				}
				if(idadeatleta>=11 && idadeatleta<=13)
				{
					printf(" \n Ola atleta, voce esta na categoria JUVENIL  A");
					printf(" \n Boa sorte ;)");
				}
				if(idadeatleta>=14 && idadeatleta<=17)
				{
					printf(" \n Ola atleta, voce esta na categoria JUVENIL  B");
					printf(" \n Boa sorte ;)");
				}
				if(idadeatleta>=18)
				{
					printf(" \n Ola atleta, voce esta na categoria SENIOR");
					printf(" \n Boa sorte ;)");
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 37:
				//Questao 37
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 37                   \n");
				printf(" \n ===============================================\n");
				printf(" \n                                     TABELA PLANO DE SAUDE                \n");
				printf(" \n                     IDADE                                      VALOR     \n");             
				printf(" \n                  ATE 10 ANOS                                 R$ 30.00    \n");
				printf(" \n            ACIMA DE 10 ATE 29 ANOS                           R$ 60.00    \n");
				printf(" \n            ACIMA DE 29 ATE 45 ANOS                           R$ 120.00   \n");
				printf(" \n            ACIMA DE 45 ATE 59 ANOS                           R$ 150.00   \n");
				printf(" \n            ACIMA DE 59 ATE 65 ANOS                           R$ 250.00   \n");
				printf(" \n                ACIMA DE 65 ANOS                              R$ 400.00   \n");
				printf(" \n Ola digite o seu nome \t");
				scanf("%s", &nome14);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Ola, %s, seja bem-vindo(a)", nome14);
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Digite a idade \t");
				scanf("%d", &idadeplano);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if(idadeplano<=10)
				{
					printf(" \n %s, o valor do plano sera de R$ 30.00", nome14);
				}
				if(idadeplano>=10 && idadeplano <=29)
				{
					printf(" \n %s, o valor do plano sera de R$ 60.00", nome14);
				}
				if(idadeplano>=29 && idadeplano <=45)
				{
					printf(" \n %s, o valor do plano sera de R$ 120.00", nome14);
				}
				if(idadeplano>=45 && idadeplano <=59)
				{
					printf(" \n %s, o valor do plano sera de R$ 150.00", nome14);
				}
				if(idadeplano>=59 && idadeplano <=65)
				{
					printf(" \n %s, o valor do plano sera de R$ 250.00", nome14);
				}
				if(idadeplano>=65)
				{
					printf(" \n %s, o valor do plano sera de R$ 400.00", nome14);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 38:
				//Questao 38
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 38                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite o  numero correspondente ao mes\n\n que voce quer descobrir \t");
				scanf("%d", &nmrmes);
				printf("\n Processando...");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				switch(nmrmes)
				{
					case 1:
					printf(" \n Voce selecionou Janeiro");
					case 2:
					printf(" \n Voce selecionou Fevereiro");
					case 3:
					printf(" \n Voce selecionou Marco");
					case 4:
					printf(" \n Voce selecionou Abril");
					case 5:
					printf(" \n Voce selecionou Maio");
					case 6:
					printf("\n Voce selecionou Junho");
					case 7:
					printf(" \n Voce selecionou Julho");
					case 8:
					printf(" \n Voce selecionou Agosto");
					case 9:
					printf(" \n Voce selecionou Setembro");
					case 10:
					printf(" \n Voce selecionou Outubro");
					case 11:
					printf(" \n Voce selecionou Novembro");
					case 12:
					printf(" \n Voce selecionou Dezembro");
					default:
					printf(" \n Por favor, escolha um numero entre 1 e 12");
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 39:
				//Questao 39
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 39                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Digite a pontuacao do primeiro jogador \t ");
				scanf("%d", &player1);
				printf("\n");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Digite a pontuacao do segundo jogador \t ");
				scanf("%d", &player2);
				printf("\n");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n Digite a pontuacao do terceiro jogador \t ");
				scanf("%d", &player3);
				printf("\n");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				if (player1 < player3) 
				{
				    int players = player3;
				    player3 = player1;
				    player1 = players;
				}
				if (player1 < player2)
				{
					int players = player2;
				    player2 = player1;
				    player1 = players;
				}
				if (player2 < player3)
				{
				    int players = player3;
				    player3 = player2;
				    player2 = players;
				}
				mediaplayers = (player1+player2+player3)/3;	
				somaplayers = (player1+player2+player3);
					
				printf(" \n Os pontos do primeiro jogador e igual a %d\n\n Os pontos do segundo jogador e igual a %d\n\n Os pontos do terceiro jogador e igual a %d", player1, player2, player3);				
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				printf(" \n A ordem decrescente da pontuacao dos jogadores  e 1- %d\n\n 2- %d\n\n 3- %d", player1, player2, player3);	
				printf("\n");
				if(somaplayers > 100)
				{	
					printf(" \n A soma da pontuacao dos jogadores e igual a %d", somaplayers);
					printf(" \n Clique ENTER para continuar \t");
					getch();
					printf("\n");
					printf(" \n A media aritmetica da pontuacao dos jogadores e igual a %d", mediaplayers);
				}
				else
				{
					printf(" \n A soma da pontuacao dos jogadores e igual a %d", somaplayers);
					printf(" \n Clique ENTER para continuar \t");
					getch();
					printf("\n");
					printf(" \n EQUIPE DESCLASSIFICADA");
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				case 40:
				//Questao 40
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 40                   \n");
				printf(" \n ===============================================\n");
				printf(" \n                                  TABELA CREDITO ESPECIAL                           \n");
				printf(" \n                  SALDO MEDIO                                PERCENTUAL             \n");             
				printf(" \n                  DE 0 A 500                               NENHUM CREDITO           \n");
				printf(" \n                DE 501 A 1000                       30%% DO VALOR DO SALDO MEDIO    \n");
				printf(" \n                DE 1001 A 3000                      40%% DO VALOR DO SALDO MEDIO    \n");
				printf(" \n                 ACIMA DE 3001                      50%% DO VALOR DO SALDO MEDIO    \n");
				printf("\n");
				printf(" \n Por favor, digite o seu saldo medio bancario R$ \t");
				scanf("%f", &saldomediocliente);
				printf("\n");
				printf("\n Clique ENTER para continuar");
				getch();
				printf("\n");
				porcentagemsaldo1 = (0.3*saldomediocliente);
				porcentagemsaldo2 = (0.4*saldomediocliente);
				porcentagemsaldo3 = (0.5*saldomediocliente);
				if(saldomediocliente<=500)
				{
					printf(" \n Como o seu saldo medio bancario e igual a R$ %.2f\n\n Nao sera concedido NENHUM CREDITO", saldomediocliente);
					
				}
				if(saldomediocliente>=501 && saldomediocliente<=1000)
				{
					printf(" \n Como o seu saldo medio bancario e igual a R$ %.2f\n\n O credito concedido sera de 30%% DO VALOR DO SALDO MEDIO\n\n Totalizando R$ %.2f", saldomediocliente, porcentagemsaldo1);
				}
				if(saldomediocliente>=1001 &&  saldomediocliente <=3001)
				{
					printf(" \n Como o seu saldo medio bancario e igual a R$ %.2f\n\n O credito concedido sera de 40%% DO VALOR DO SALDO MEDIO\n\n Totalizando R$ %.2f", saldomediocliente, porcentagemsaldo2);
				}
				if(saldomediocliente>3001)
				{
					printf(" \n Como o seu saldo medio bancario e igual R$ %.2f\n\n O credito concedido sera de 50%% DO VALOR DO SALDO MEDIO\n\n\ Totalizando R$ %.2f", saldomediocliente, porcentagemsaldo3);
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 41:
				//Questao 41
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 41                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, essa e a nossa biblioteca");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Por favor digite o seu nome \t");
				scanf("%s", &nome15);
				printf("\n");
				printf(" \n Seja bem-vindo(a), %s", nome15);
				printf("\n");	
				printf(" \n Digite o nome do livro \t");
				gets(nomedolivro);
				gets(nomedolivro);
				printf("\n");
				printf("\n");
				printf(" \n Voce e professor ou aluno ?\n\n Digite 1 para PROFESSOR\n\n Digite 2 para ALUNO \t");
				scanf("%d", &escolhaprofaluno);
				printf("\n");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				switch(escolhaprofaluno==1)
				{
					case 1:
						
					printf(" \n Digite a quantidade de dias\n\n que voce ficou com o livro %s, %s \t", nomedolivro, nome15);
					scanf("%d", &diastotais);
					printf("\n");
					printf(" \n Processando...");
					printf(" \n Clique ENTER para continuar \t");
					getch();
					printf("\n");
										
					if(diastotais >= 10)
					{
						printf(" \n Limite atingido, multa de R$ 5.00");
						printf(" \n Nome do professor : %s\n\n Nome do livro : %s\n\n Quantidade de dias : %d", nome15, nomedolivro, diastotais);
					}
					else
					{
						printf("\n");	
						printf(" \n Nome do professor : %s\n\n Nome do livro : %s\n\n Quantidade de dias : %d", nome15, nomedolivro, diastotais);
						printf(" \n OBRIGADO");
					}
						break;
					
					case 2:
				
					printf(" \n Digite a quantidade de dias\n\n que voce ficou com o livro %s, %s \t", nomedolivro, nome15);
					scanf("%d", &diastotais);
					printf("\n");
					printf(" \n Processando...");
					printf(" \n Clique ENTER para continuar \t");
					getch();
					printf("\n");
					
					if(diastotais >=3)
					{
						printf(" \n Limite atingido, multa de R$ 10.00");
						printf(" \n Nome do aluno : %s\n\n Nome do livro : %s\n\n Quantidade de dias : %d", nome15, nomedolivro, diastotais);
					}
					else
					{
						printf("\n");	
						printf(" \n Nome do aluno : %s\n\n Nome do livro : %s\n\n Quantidade de dias : %d", nome15, nomedolivro, diastotais);
					}
					break;
					
					default:
						printf(" \n Por favor, escolha uma opcao");
				}
					
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 42:
				//Questao 42
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 42                   \n");
				printf(" \n ===============================================\n");
				printf(" \n Ola, esse e o nosso medidor de consumo de combustivel");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Por favor digite o seu nome \t");
				scanf("%s", &nome16);
				printf("\n");
				printf(" \n Ola, %s, seja bem-vindo(a)!!!", nome16);
				printf(" \n Qual o seu tipo de carro ?\n\n Digite 1 para TIPO A\n\n Digite 2 para TIPO B\n\n Digite 3 para TIPO C \t");
				scanf("%d", &tipodecarro);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				switch(tipodecarro)
				{
					case 1:
						printf(" \n O seu tipo de carro selecionado e o tipo A");
						printf(" \n Lembre-se que, o TIPO A percorre 12 km\n\n Com 1 litro de gasolina");
						printf(" \n Clique ENTER para continuar \t");
						getch();
						printf("\n");						
						printf(" \n Por favor %s, digite o percurso em quilometros (km) KM : \t", nome16);
						scanf("%f", &percursoemkm);
						printf(" \n Processando...");
						printf(" \n Clique ENTER para continuar \t");
						getch();
						printf("\n");
						calculogasolina = (12*percursoemkm);
						printf(" \n Apos analise %s\npercebemos que o consumo estimado de combustivel\n\n E igual a %.2f litros", nome16, calculogasolina);
						printf(" \n Obrigado por utilizar nossos servicos :) ");
						break;
						
					case 2:
						printf(" \n O seu tipo de carro selecionado e o tipo B");
						printf(" \n Lembre-se que, o TIPO B percorre 9 km\n\n Com 1 litro de gasolina");
						printf(" \n Clique ENTER para continuar \t");
						getch();
						printf("\n");						
						printf(" \n Por favor %s, digite o percurso em quilometros (km) KM : \t", nome16);
						scanf("%f", &percursoemkm);
						printf(" \n Processando...");
						printf(" \n Clique ENTER para continuar \t");
						getch();
						printf("\n");
						calculogasolina2 = (9*percursoemkm);
						printf(" \n Apos analise %s\npercebemos que o consumo estimado de combustivel\n\n E igual a %.2f litros", nome16, calculogasolina2);
						printf(" \n Obrigado por utilizar nossos servicos :) ");
						break;
						
					case 3:
						printf(" \n O seu tipo de carro selecionado e o tipo C");
						printf(" \n Lembre-se que, o TIPO C percorre 8 km\n\n Com 1 litro de gasolina");
						printf(" \n Clique ENTER para continuar \t");
						getch();
						printf("\n");						
						printf(" \n Por favor %s, digite o percurso em quilometros (km) KM : \t", nome16);
						scanf("%f", &percursoemkm);
						printf(" \n Processando...");
						printf(" \n Clique ENTER para continuar \t");
						getch();
						printf("\n");
						calculogasolina3 = (8*percursoemkm);
						printf(" \n Apos analise %s\npercebemos que o consumo estimado de combustivel\n\n E igual a %.2f litros", nome16, calculogasolina3);
						printf(" \n Obrigado por utilizar nossos servicos :) ");
						break;
						
					default:
						printf(" \n Por favor, digite um tipo (DE 1 A 3) e tente novamente :) ");
						break;
						
												
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 43:
				//Questao 43
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 43                   \n");
				printf(" \n ===============================================\n");
				printf(" \n             TABELA DE ALIMENTOS                \n");
				printf(" \n                    PRATO                       \n");             
				printf(" \n              Vegetariano 180cal                \n");
				printf(" \n                Peixe 230cal                    \n");
				printf(" \n                Frango 250cal                   \n");
				printf(" \n                Carne 350cal                    \n");
				printf("\n\n");
				printf(" \n           TABELA CALORIAS SOBREMESA            \n");
				printf(" \n                  SOBREMESAS                    \n");             
				printf(" \n                 Abacaxi 75cal                  \n");
				printf(" \n              Sorvete diet 110cal               \n");
				printf(" \n               Mousse diet 170cal               \n");
				printf(" \n             Mousse chocolate 200cal            \n");
				printf("\n\n");
				printf(" \n           TABELA CALORIAS BEBIDAS              \n");
				printf(" \n                   BEBIDAS                      \n");             
				printf(" \n                 Cha 20cal                      \n");
				printf(" \n              Suco de laranja 70cal             \n");
				printf(" \n               Suco de melao 100cal             \n");
				printf(" \n             Mousse chocolate 200cal            \n");
				printf("\n\n");
				printf(" \n           TABELA CALORIAS BEBIDAS              \n");
				printf(" \n                   BEBIDAS                      \n");             
				printf(" \n                 Cha 20cal                      \n");
				printf(" \n              Suco de laranja 70cal             \n");
				printf(" \n               Suco de melao 100cal             \n");
				printf(" \n             Mousse chocolate 200cal            \n");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				printf(" \n Prato 1 : Vegetariano, Sobremesa : Abacaxi, Bebida : Chá");
				printf(" \n Prato 2 : Peixe, Sobremesa : Sorvete diet, Bebida : Suco de laranja");	
				printf(" \n Prato 3 : Prato 3 : Frango, Sobremesa : Mousse diet, Bebida : Suco de melão");
				printf(" \n Prato 4 : Prato 4 : Carne, Sobremesa : Mousse de chocolate, Bebida : Refrigerante diet");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");				
				printf(" \n Por favor, informe o prato\n\n Digite o numero correspondente ao prato \t");
				scanf("%d", &escolhapratoss);
				switch(escolhapratoss)
				{
					case 1:
						printf(" \n Voce escolheu o prato 1\n\n Composto por : Prato Vegetariano, Sobremesa : Abacaxi, Bebida : Chá");
						printf(" \n Confirmar pedido ? \n\n Digite 1 para SIM\n\n Digite 2 para NAO \t");
						scanf("%d", &confirmarpratos);
						if(confirmarpratos==1)
						{
							printf(" \n Tudo bem, de acordo com as calorias de cada alimento");
							calculopratos1 = (180+75+20);
							printf(" \n Prato vegetariano : 180\n\n Sobremesa Abacaxi : 75\n\n Bebida Cha : 20");
							printf(" \n Clique ENTER para continuar \t");
							getch();
							printf("\n");							
							printf(" \n A caloria total do seu prato e igual a %d", calculopratos1);
						}
						if(confirmarpratos==2)
						{
							printf(" \n Tudo bem, cancelando o seu pedido :)");
							printf(" \n VOLTE SEMPRE :)");
						}
						break;
						
					case 2:
						printf(" \n Voce escolheu o prato 2\n\n Composto por : Peixe, Sobremesa : Sorvete diet, Bebida : Suco de laranja");
						printf(" \n Confirmar pedido ? \n\n Digite 1 para SIM\n\n Digite 2 para NAO \t");
						scanf("%d", &confirmarpratos);
						if(confirmarpratos==1)
						{
							printf(" \n Tudo bem, de acordo com as calorias de cada alimento");
							calculopratos2 = (230+110+70);
							printf(" \n Peixe : 230\n\n Sobremesa Sorvete diet : 110\n\n Bebida Suco de laranja : 70");
							printf(" \n Clique ENTER para continuar \t");
							getch();
							printf("\n");							
							printf(" \n A caloria total do seu prato e igual a %d", calculopratos2);
						}
						if(confirmarpratos==2)
						{
							printf(" \n Tudo bem, cancelando o seu pedido :)");
							printf(" \n VOLTE SEMPRE :)");
						}
						break;
						
					case 3:
						printf(" \n Voce escolheu o prato 3\n\n Composto por : Frango, Sobremesa : Mousse diet, Bebida : Suco de melão");
						printf(" \n Confirmar pedido ? \n\n Digite 1 para SIM\n\n Digite 2 para NAO \t");
						scanf("%d", &confirmarpratos);
						if(confirmarpratos==1)
						{
							printf(" \n Tudo bem, de acordo com as calorias de cada alimento");
							calculopratos3 = (250+170+100);
							printf(" \n Frango : 250\n\n Sobremesa Mousse diet : 170\n\n Bebida Suco de melao : 100");
							printf(" \n Clique ENTER para continuar \t");
							getch();
							printf("\n");							
							printf(" \n A caloria total do seu prato e igual a %d", calculopratos3);
						}
						if(confirmarpratos==2)
						{
							printf(" \n Tudo bem, cancelando o seu pedido :)");
							printf(" \n VOLTE SEMPRE :)");
						}
						
					case 4:
						printf(" \n Voce escolheu o prato 4\n\n Composto por : Carne, Sobremesa : Mousse de chocolate, Bebida : Refrigerante diet");
						printf(" \n Confirmar pedido ? \n\n Digite 1 para SIM\n\n Digite 2 para NAO \t");
						scanf("%d", &confirmarpratos);
						if(confirmarpratos==1)
						{
							printf(" \n Tudo bem, de acordo com as calorias de cada alimento");
							calculopratos4 = (350+200+65);
							printf(" \n Carne : 350\n\n Sobremesa Mousse de chocolates : 200\n\n Bebida refrigerante diet : 65");
							printf(" \n Clique ENTER para continuar \t");
							getch();
							printf("\n");							
							printf(" \n A caloria total do seu prato e igual a %d", calculopratos4);
						}
						if(confirmarpratos==2)
						{
							printf(" \n Tudo bem, cancelando o seu pedido :)");
							printf(" \n VOLTE SEMPRE :)");
						}
						break;
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				/*case 44: // ENCERRADO POR BUGS INDETECTAVEIS
				//Questao 44
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 44                   \n");
				printf(" \n ===============================================\n");
				printf(" \n           POLICIA RODOVIARIA FEDERAL           \n");
				printf(" \n Por favor, digite a numeracao da sua placa para renovao");
				printf(" \n Programa adptado para apenas numeros :) ");
				printf(" \n Lembre-se que a placa no formato 2018\n\n Contem 7 caracteres \n\n Exemplo : 1234567 \t");
				scanf("%d", &numeracaoplaca);
				printf(" \n Processando...");
				printf(" \n Clique ENTER para continuar \t");
				getch();
				printf("\n");
				calculoplaca = (numeracaoplaca%1000);
				switch(calculoplaca)
				{
					case 1:
						printf(" \n Placa com final 1: vencimento em abril");
						break;
						
					case 2:
						printf("\n Placa com final 2: vencimento em maio");
						break;
			
					case 3:
						printf(" \n Placa com final 3: vencimento em junho");
						break;				
					
					case 4:
						printf(" \n Placa com final 4: vencimento em julho");
						break;				
						
					case 5:
						printf(" \n Placa com final 5: vencimento em agosto");
						break;
						
					case 6:
						printf(" \n Placa com final 6: vencimento em agosto");
			 			break;	
						
					case 7:
						printf(" \n Placa com final 7: vencimento em setembro");
			 			break;	
					
					case 8:
						printf(" \n Placa com final 8: vencimento em outubro");
						break;   					
						
					case 9:
						printf(" \n Placa com final 9: vencimento em novembro");
						break;			  
					
					case 10:
						printf(" \n Placa com final 0: vencimento em dezembro");
						break;
						
					default:
					printf(" \n Nao identificamos o ultimo digito da sua placa\n\n Por favor tente novamente !!!");				
				}
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;
				
				
				case 45:
				//Questao 45
				printf(" \n ===============================================\n");
				printf(" \n                   QUESTAO 45                   \n");
				printf(" \n ===============================================\n");				
						
				}*/
				
				
											
				default:
				printf("\n");
				printf(" \n Por favor, digite uma questao de 1 a 45 \n");
				printf(" \n ===============================================\n");
				printf(" \n          Clique ENTER para continuar           \n");
				getch();	
				break;	
			}
		

		} while (escolha !=0); 
}
