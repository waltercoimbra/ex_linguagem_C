#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL,"");

    printf("============ CONTAGEM PERSONALIZADA ===============\n");
    int ini,passo,fim;


    printf("INICIO: ");
    fflush(stdin);
    scanf("%d",&ini);

    printf("FIM: ");
    fflush(stdin);
    scanf("%d",&fim);

    printf("PASSO: ");
    fflush(stdin);
    scanf("%d",&passo);
    if(passo <= 0){
        passo *= -1;
    }

    for(int i=ini;i<=fim;i+=passo){
        printf("%d..",i);
        Sleep(400);
    }
    printf("FIM!\n");
    if(ini > fim){
        for(int i=ini;i>=fim;i-=passo){
            printf("%d..",i);
            Sleep(400);
        }
        printf("FIM!\n");
    }
    printf("==========================================\n\n");


}
