#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
/*Ex017: Fa�a um jogo de adivinha��o onde o computador sorteie
um n�mero entre 1 e 10 e o jogador vai tentar acertar qual foi
o n�mero "pensado" pelo computador. O jagador ter� 3 chances de
acertar e o programa vai dizer se cada chute dele foi alto demais ou
baixo demais para ajud�-lo a descobrir o n�mero.
*/

int main(){
    setlocale(LC_ALL,"");
    int total = 5;
    printf("----------------------------------------\n");
    printf("Vou pensar em um n�mero entre 1 e 10.\n");
    printf("Voc� tem %d chances para tentar adivinhar.\n",total);
    printf("----------------------------------------\n");
    //Gerar o n�mero
    srand(time(NULL));
    int pensou = rand() % 10 + 1;
    printf("%d\n",pensou);
    //variaveis
    int palpite,chances = 1;
    bool acertou = false;//inclua stdboo.h
    //La�o de repeti��o fa�a-enquanto
    do{
        printf("-------------------\n");
        printf("Chance %d / %d \n",chances,total);
        printf("--------------------\n");
        printf("Qual � seu palpite? ");
        scanf("%d",&palpite);
        if(palpite == pensou){
            acertou = true;
            printf("\nParab�ns, voc� acertou o n�mero em %d tentativas\n",chances);
            Sleep(1000);
            break;
        }else{
            printf("\nInfelismente ainda n�o foi dessa vez...\n");
            Sleep(1000);
            chances++;
            if(chances <= total){
                printf("Mas vou te dar uma chance...\n");
                Sleep(1000);
                if(palpite < pensou){
                    printf("\nChute um n�mero MAIOR!\n");
                    Sleep(1000);
                }else{
                    printf("\nChute um n�mero MENOR!\n");
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
