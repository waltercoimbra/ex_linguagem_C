#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int tot;
    printf("Quantos números vou sortear? ");
    scanf("%d",&tot);
    printf("Sorteando %d valores\n",tot);
    int c=1,num,m_cinco = 0,d_tres = 0;
    while(c <= tot){
        num = (rand() % 10) + 1;
        printf("%d - ",num);
        if(num > 5){
            m_cinco++;
        }
        if(num % 3 == 0){
            d_tres++;
        }
        Sleep(400);
        c++;
    }
    printf("PROTO!!\n\n");
    printf("Dos %d números sorteados \ntemos %d maiores que cinco\n e %d divisíveis por três.\n\n",tot,m_cinco,d_tres);

return 0;
}
