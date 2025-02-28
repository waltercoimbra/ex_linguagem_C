#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"");
    char nome[50],velho[50],novo[50];
    int idade;
    int c = 1,maior=0,menor=0;

    while(c <= 5){
        printf("-------------\n");
        printf("%dª PESSOA\n",c);
        printf("--------------\n");

        printf("NOME: ");
        fflush(stdin);
        gets(nome);

        printf("IDADE: ");
        fflush(stdin);
        scanf("%d",&idade);

        if(c == 1){
            maior = idade;
            strcpy(velho,nome);
            menor = idade;
            strcpy(novo,nome);
        }else{
            if(idade > maior){
                maior = idade;
                strcpy(velho,nome);
            }
            if(idade < menor){
                menor = idade;
                strcpy(novo,nome);
            }

        }
        c++;
    }
    printf("A pessoa mais jovem é %s com %d anos.\n",novo,menor);
    printf("A pessoa mais velha é %s com %d anos.\n",velho,maior);
}
