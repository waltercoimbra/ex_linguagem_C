#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL,"");
                //variaveis
    char nome[50],hjovem[50],hvelho[50],mjovem[50],mvelha[50];
    char sexo;
    int c = 1,idade,toth=0,totm=0,hmaior=0,hmenor=0,maiorM,menorM;


    while(c <= 5){
        printf("----------------------------\n");
        printf("%dª PESSOA \n",c);
        printf("----------------------------\n");

        printf("NOME: ");
        fflush(stdin);
        gets(nome);

        printf("SEXO: ");
        fflush(stdin);
        sexo = getchar();

        printf("IDADE: ");
        fflush(stdin);
        scanf("%d",&idade);

        if(toupper(sexo) == 'M'){
            toth++;
            if(toth == 1){
                hmaior = idade;
                strcpy(hvelho,nome);
                hmenor = idade;
                strcpy(hjovem,nome);
            }else{
                if(idade > hmaior){
                    hmaior = idade;
                    strcpy(hvelho,nome);
                }
                if(idade < hmenor){
                    hmenor = idade;
                    strcpy(hjovem,nome);
                }

            }
        }else if(toupper(sexo) == 'F'){
            totm++;
            if(totm == 1){
                maiorM = idade;
                strcpy(mvelha,nome);
                menorM = idade;
                strcpy(mjovem,nome);

            }else {
                if(idade > maiorM){
                    maiorM = idade;
                    strcpy(mvelha,nome);
                }
                if(idade < menorM){
                    menorM = idade;
                    strcpy(mjovem,nome);
                }

            }
        }



    c++;
    }
    printf("====================================================\n");
    printf("Ao todo tivemos %d homens e %d mulheres cadastrados.\n",toth,totm);
    printf("O homem mais jovem é %s que tem %d anos\n",hjovem,hmenor);
    printf("O homem mais velho é %s que tem %d anos\n",hvelho,hmaior);
    printf("A mulher mais jovem é %s que tem %d anos\n",mjovem,menorM);
    printf("A mulher mais velha é %s que tem %d anos\n",mvelha,maiorM);
    printf("====================================================\n\n");
}
