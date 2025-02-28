#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL,"");
    printf("---------------------------------\n");
    printf("             JOGO DO PIN         \n");
    printf("---------------------------------\n");
    int tot;
    printf("Quer contar até quanto? ");
    scanf("%d",&tot);

    int c = 1;
    while(c <= tot){
        if(c % 4 != 0){
        printf("%d - ",c);
        }else{
         printf("PIN! ");
        }
        Sleep(400);
        c++;
    }
    printf("FIM!");

return 0;
}
