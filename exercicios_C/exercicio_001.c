#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL,"");
    int i,f,p;
    printf("Onde começa a contagem: ");
    fflush(stdin);
    scanf("%d",&i);
    printf("Onde termina a contagem: ");
    fflush(stdin);
    scanf("%d",&f);
    printf("Qual vai ser o incremento: ");
    fflush(stdin);
    scanf("%d",&p);

    int c = i;
    while(c <= f){
        printf("%d ",c);
        Sleep(500);
        c = c + p;

    }
    printf("FIM");
return 0;
}
