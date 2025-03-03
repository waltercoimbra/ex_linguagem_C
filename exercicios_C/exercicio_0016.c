#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int num = rand() % 10 + 1;

    int tot=0,soma=0,maior=0,menor=0,num5=0;
    char resp;

    do{
        srand(time(NULL));
        int num = rand() % 10 + 1;
        printf("O %dº valor sorteado foi %d\n",(tot + 1),num);
        tot++;
        soma += num;
        if(tot == 1){
            maior = num;
            menor = num;
        }else{
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
        }
        if(num == 5){
            num5++;
        }
        printf("Quer continuar? [S/N]: ");
        fflush(stdin);
        resp = getchar();
    }while(resp == 'S' || resp == 's');
    printf("========== RESULTADO =============\n");
    printf("Ao todo foram sorteados %d valores\n",tot);
    printf("A soma de todos os números foi %d\n",soma);
    printf("O maior valor foi %d e o menor valor foi %d\n",maior,menor);
    printf("O valor 5 foi sorteado %d vezes\n",num5);
    printf("---------------------------------\n\n");

return 0;
}
