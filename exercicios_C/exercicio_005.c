#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
    setlocale(LC_ALL,"");
    int tot;

    srand(time(NULL));//Inicializa a semente para a fun��o rand() usando o tempo atual

    printf("Quantos n�meros voc� quer que eu sortei? ");
    fflush(stdin);
    scanf("%d",&tot);
    printf("---------------------------------------\n");
    printf("Sorteando os %d n�meros: \n",tot);

    int c = 1,num,soma = 0;
    while(c <= tot){
        num = rand() % 10 + 1;
        soma += num;
        printf("%d ",num);
        c++;
        Sleep(400);
    }
    printf("PRONTO!\n");
    printf("------------------------------------------\n");
    printf("A soma de todos esses valores � igual a %d,\n\n",soma);







  //  num = rand() % 10 + 1;
   // printf("N�mero sorteado %d",num);

// int numero_no_intervalo = (rand() % 100) + 1;

 return 0;
}
