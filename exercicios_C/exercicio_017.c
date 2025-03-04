#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
/*Ex017: Faça um jogo de adivinhação onde o computador sorteie
um número entre 1 e 10 e o jogador vai tentar acertar qual foi
o número "pensado" pelo computador. O jagador terá 3 chances de
acertar e o programa vai dizer se cada chute dele foi alto demais ou
baixo demais para ajudá-lo a descobrir o número.
*/

int main(){
    setlocale(LC_ALL,"");
    int total = 5;
    printf("----------------------------------------\n");
    printf("Vou pensar em um número entre 1 e 10.\n");
    printf("Você tem %d chances para tentar adivinhar.\n",total);
    printf("----------------------------------------\n");
    //Gerar o número
    srand(time(NULL));
    int pensou = rand() % 10 + 1;
    printf("%d\n",pensou);
    //variaveis
    int palpite,chances = 1;
    bool acertou = false;//inclua stdboo.h
    //Laço de repetição faça-enquanto
    do{
        printf("-------------------\n");
        printf("Chance %d / %d \n",chances,total);
        printf("--------------------\n");
        printf("Qual é seu palpite? ");
        scanf("%d",&palpite);
        if(palpite == pensou){
            acertou = true;
            printf("\nParabéns, você acertou o número em %d tentativas\n",chances);
            Sleep(1000);
            break;
        }else{
            printf("\nInfelismente ainda não foi dessa vez...\n");
            Sleep(1000);
            chances++;
            if(chances <= total){
                printf("Mas vou te dar uma chance...\n");
                Sleep(1000);
                if(palpite < pensou){
                    printf("\nChute um número MAIOR!\n");
                    Sleep(1000);
                }else{
                    printf("\nChute um número MENOR!\n");
                    Sleep(1000);
                }
            }else{
                printf("Suas chances ACABARAM! :( \n");
                Sleep(1000);
                break;
            }
        }

    }while (!acertou);
    printf("\n================== FIM DO JOGO ====================\n");

return 0;
}
