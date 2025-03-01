#include <stdio.h>
#include <locale.h>

/* Exercicio 014: Escreva um programa que leia NOME, SEXO e SALÁRIO de vários funcionários.
O programa também deve perguntar se o usuário deve ou não continuar o cadastro.
No final, analise os dados e mostre:
- Total de funcionários cadastrados
- Total de homens
- Total de mulheres
- Média salarial dos homens
- Total de mulheres que ganham mais de R$1.000,00
- Maior salário entre os homens
*/
int main(){
    char nome[50];
    char sexo,resp;
    float salario,media=0,maiorM=0;
    int tot=0,totM=0,totF=0,soma=0,maiorMil=0;

    while(1){
        printf("NOME: ");
        fflush(stdin);
        gets(nome);
        printf("SEXO [M/F]: ");
        fflush(stdin);
        sexo = getchar();
        printf("SALARIO: R$");
        fflush(stdin);
        scanf("%f",&salario);
        tot++;
        if(sexo == 'M'){
            totM++;
            soma += salario;
            if(totM == 1){
                maiorM = salario;
            }else{
                if(salario > maiorM){
                    maiorM = salario;
                }
            }
        }
        if(sexo == 'F'){
            totF++;
            if(salario > 1000){
                maiorMil++;
            }
        }

        printf("Quer continuar? [S/N]");
        fflush(stdin);
        resp = getchar();
        if(resp == 'N' || resp == 'n'){
            break;
        }
        printf("--------------------------\n");

    }
    media = (float)soma / totM;
    printf("========== RESULTADOS ===========\n");
    printf("Total de Funcionários:%d\n",tot);
    printf("Total de Homens: %d\n",totM);
    printf("Total de Mulheres: %d\n",totF);
    printf("Média salarial dos Homens e R$%.1f\n",media);
    printf("Temos %d mulheres ganhando mais de R$1000\n",maiorMil);
    printf("O maior salário entre os Homens e de R$%.1f\n",maiorM);
return 0;
}
