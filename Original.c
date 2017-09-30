#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	//define o 
	setlocale(LC_ALL,"portuguese");
	
	//declarando os ponteiros
    char *pNome;
    char *pTel;
    int *pIdade;

    pNome = malloc(50*sizeof(char));

    pTel = malloc(14*sizeof(char));

    pIdade = malloc(sizeof(int));
    
    printf("digite o nome......: ");
    gets(pNome);

    printf("digite a idade.....>");
    scanf("%d", pIdade);

    printf("Digite o Telefone: ");

    fflush(stdin);

    gets(pTel);

    printf("\n\n---Listando os dados---\n");

    puts(pNome);

    printf("%d\n", *pIdade);

    puts(pTel);

    printf("\n---Listando os endereços de memoria---\n");
    printf("pNome...: %p\n", pNome);
    printf("pIdade...: %d\n", *pIdade);
    printf("pTel...: %p\n\n", pTel);

    return  0;

}

