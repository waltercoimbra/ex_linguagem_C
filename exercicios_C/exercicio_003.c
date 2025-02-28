#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
    setlocale(LC_ALL,"");

    int num,mult;
    printf("Sua contagem regressiva vai começar em: ");
    scanf("%d",&num);
    printf("Marcar os multiplos de: ");
    scanf("%d",&mult);

    int c = num;
    while(c >= 0){
        if(c % mult == 0){
            printf("[%d] - ",c);
        }else{
            printf("%d - ",c);
        }
        Sleep(300);
        c--;
    }
    printf("FIM!!");
}
