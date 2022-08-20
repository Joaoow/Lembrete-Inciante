#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char str1[]="isso",str2[]=" com aquilo";

	printf("\n");
	printf("[+] Surgiu na decada de 70, criada por Dennis Ritchie.\n");
	printf("[+] C e uma linguagem ESTRUTURADA, ou seja, nao h� orientacao a objetos.\n");
	printf("[+] C e Case Sensitive.\n");
	printf("[+] 1� define o cabecalho/bibliotecas.\n");
	printf("[+] 2� define as vari�veis globais, se houverem.\n");
	printf("[+] 3� define as funcoes extras, se houverem.\n");
	printf("[+] 3� define as funcoes extras, se houverem.\n");
	printf("[+] 4� define a funcao principal do programa.\n");
	printf("[+] Ol� mundo em C, o b�sico:\n\n");
	printf("\t# include <stdio.h>\n\tint main(){\n\tprintf(\"Terminal Root\\n\");\n\treturn 0;\n\t}\n\n");
	printf("[+] No cabecalho inclu�mos a biblioteca stdio.h entrada e sa�da I\\0 \n");
	printf("[+] A funcao main() e a funcao principal, e � do tipo inteira: int \n");
	printf("[+] Para imprimir usamos: printf(\"CONTEUDO\");\n");
	printf("[+] Para escapar as aspas/barras, usamos uma barra \\ \n");
	printf("[+] O ponto e v�rgula no final � necess�rio para sintaxe, o \\n , pula uma linha no prompt\n");
	printf("[+] return 0; Serve para informar ao compilador que ocorreu tudo certo com a fun��o main(). \n");
	printf("[+] As funcoes ficam entre chaves {} \n");
	printf("[+] Salve o arquivo com o nome desejado, ex.: arquivo.c\n");
	printf("[+] Depois compile-o com o comando: gcc arquivo.c -o arquivo\n");
	printf("[+] E por fim, rode o aplicativo: ./arquivo\n");
	printf("[+] Coment�rios, podem ser de 2 formas: // barra barra ou /* barra asterisco, asterisco barra, para blocos de coment�rios */\n");
	printf("[+] Se houver um erro , o C informa a linha, experimente colocar uma barra sem escapar\n\taparecer� mais ou menos isso, referente a linha 25: \n\n");
	printf("\taprender-c.c:25:9: warning: unknown escape sequence: '040'\n\n");
	printf("[+] Tipos de Dados:\n\n\t� A linguagem C possu� 5 (cinco) tipos b�sicos de dados : char , int , float , void e double.\n\t� Para cada tipo de dado existem 			modificadores de tipo, estes s�o 4 (quatro) : signed , unsigned, long e short.\n\t� Lembre - se, para o float nenhum modificado pode ser aplicado ; 			assim como para o double podemos aplicar apenas o long.\n\n");
	printf("[+] Declarar Vari�vel: tipo_da_variavel nome_da_variavel = valor_inicial_da_variavel;\n");
	printf("[+] Declarar v�rias Vari�veis do mesmo tipo: tipo_da_variavel nome_var1 = valor1, nome_var2 = valor2;\n");

	int num1 = 10, num2 = 3;
	float result = num1 + num2;

	printf("Os  valores sao : % i, %i e %f",  num1, num2, result);
	printf("\n\n[+] Constantes de barra invertida\n\n\\b Retrocesso (back) \n\\f Alimenta��o de formul�rio (form feed) \n\\n Nova linha (new line) \n\\t 				Tabula��o horizontal (tab) \n\\\" Aspas dupla \n\\\' Aspas simples \n\\0 Nulo (0 em decimal)  � Terminador \n\\\\ Barra invertida \n\\v Tabula��o 				vertical \n\\a Sinal sonoro (beep) \n\\N Constante octal (N � o valor da constante) \n\\xN Constante hexadecimal (N � o valor da constante)\n\n");
	printf("[+] Criando uma simples fun��o de soma em C:\n\n#include <stdio.h>\n\t\n\tint soma(int x,int y){\n\t return (x+y);\n\t}\n\t\n\tint main(){\n\t int saida;\n\t saida=soma(4,8);\n\t printf (\"O resultado da soma e: %%d \",saida);\n\t return(0);\n\t}\n\n");
	printf("[+] Perceba que escapamos o sinal de porcentagem com dois sinais, mas para formatar deve usar 1 s�\n");
	printf("[+] Tabela de Formatos para o printf:\n\n");
	printf("Formato\t\t\tSaida\n");
	printf("c\t\t\tchar\n");
	printf("d\t\t\tsigned int\n");
	printf("i\t\t\tigual ao d\n");
	printf("e\t\t\tNotacao Cientifica usando o caracter e\n");
	printf("E\t\t\tNotacao Cientifica usando o caracter E\n");
	printf("f\t\t\tfloat\n");
	printf("g\t\t\tusa o menor numero possivel de f e e\n");
	printf("G\t\t\tusa o menor numero possivel de f e E\n");
	printf("o\t\t\tunsigned octal\n");
	printf("s\t\t\tstring\n");
	printf("u\t\t\tunsigned int\n");
	printf("x\t\t\tunsigned hexa\n");
	printf("X\t\t\tunsigned hexa com letras maiusculas\n");
	printf("p\t\t\tponteiro de endere�o\n");
	printf("n\t\t\tNada impresso.\n");
	printf("%%\t\t\t%% seguido de outro %% ira printar %% na saida\n\n");
	printf("[+] Concatenando strings, ou seja, do tipo char:\n");
	printf("\tColocaremos uma biblioteca a mais no cabe�alho: #include <string.h>\n");
	printf("\tVamos declarar no in�cio duas strings do tipo char como matrizes: char str1[]=\"isso\",str2[]=\" com aquilo\";\n");
	printf("\tE vamos usar a funcao: strcat(), e passar o %%s no printf \n");
	printf("\t\vEu vou juntar %s", strcat(str1,str2));
	printf("\n\n");
	printf("[+] Loop for:\n");






    int i;
 	char letra;
	printf("sequencia de n�s de 1 a 10\n");
 	for(i=1;i<=10;i++)
 	printf("%d - ",i);
 	printf("\nsequencia de letras de A a Z\n");
 	for(letra = 'A';letra<='Z';letra++)
 	printf("%c - ",letra);

	printf("\n\n");
	printf("[+] Loop while:\n");

	int z = 0;

 	while(i<=4){
	printf("%d\n",z);
		z++;
	}

	//Enquanto vc n�o digitar a letra 'p' e pressionar ENTER o loop n�o para.
	char Ch;
	Ch='\0';
	while(Ch != 'p'){
		scanf("%c", &Ch);
	}

	printf("\n\n");
	printf("[+] IF, ELSE e ELSE IF:\n");

	int num; // definimos a vari�vel num como inteira, a sa�da ser� %d

	printf("Digite um numero: \n"); // imprimimos na tela a frase e pulamos uma linha com \n
	scanf("%d", &num); // L�mos o n�mero digitado e armazenamos na vari�vel num
	if(num==0){ /* come�amos a condi��o se o n�mero for ZERO */
	 printf("O n�mero e NULO\n"); // executamos o comando, nesse somente imprimimos uma mensagem na tela e pulamos um linha
	}else if(num<8){
	 printf("O numero e Menor que 8\n"); // proxima condi��o
	}else if(num<11){
	 printf("O numero e maior que 7\n"); // mais uma condi��o
	}else{
	 printf("O numero esta fora das condicoes criadas\n"); // ent�o finalizamos o bloco
	}

	printf("\n\n");
	printf("[+] Funcoes:\n");
	printf("A funcao soma esta abaixo da main() e retornara os valores abaixo setados(9, 2) a soma deles:\n");
	//definimos a vari�vel saida
	int saida;
	//setamos os valores que queremos
	saida=soma(9,2);
	//imprimimos na tela o resultado
	printf ("O resultado da soma e: %d\n",saida);

	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	return 0;
}

int soma(int x,int y)
{
 //efetuamos a opera��o
 return (x+y);
}



