#include <stdio.h>
#include <locale.h>
#include <string.h>
/* Ex 013: Escreva um programa que leia NOME e IDADE de vários amigos.
O programa será encerrado IMADIATAMENTE se o usuário digitar a palavre
ACABOU no nome. No final, mostre na tela:
- Quantos amigos foram cadastrados
- Qual é  o seu amigo mais velho.
- Qual é o seu amigo mais novo
- A média de idade dos seus amigos.

*/

int main(){
    setlocale(LC_ALL,"");

    char nome[50],amigoV[50],amigoN[50];
    int idade,tot=0,soma_idade=0,maior=0,menor=0;

   while (1) {
        printf("----------- NOVO AMIGO ------------\n");
        printf("OBS: Digite ACABOU no nome para parar.\n");
        printf("NOME: ");
        fflush(stdin);
        gets(nome);

        if (strcmp(nome, "ACABOU") == 0) {
            break;
        }

        printf("IDADE: ");
        scanf("%d", &idade);
        tot++;
        if(tot == 1){
            maior = idade;
            strcpy(amigoV,nome);
            menor = idade;
            strcpy(amigoN,nome);
        }else{
            if(idade > maior){
                maior = idade;
                strcpy(amigoV,nome);
            }
            if(idade < menor){
                menor = idade;
                strcpy(amigoN,nome);
            }

        }
        soma_idade+= idade;



    }
    float media = (float)soma_idade / tot;
    printf("Total de amigos %d\n",tot);
    printf("A média das idades é %.1f\n",media);
    printf("Seu amigo mais jovem é %s com %d anos\n",amigoN,menor);
    printf("Seu amogo mais velho é %s com %d anos\n",amigoV,maior);

return 0;
}
