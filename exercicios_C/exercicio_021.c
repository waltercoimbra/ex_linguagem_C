#include <stdio.h>
#include <windows.h>
#include <locale.h>
/*/Ex021: fa�a um programa que pergunte ao usu�rio quantos
elementos da sequ�ncia de fibonacci ser�o exibidos na tela.
seu programa dever� mostrar esses elemntos na tela, sabndo
que a seg�ncia de fibonacci � composta pelos elementos base
0 1. A partir da�, cada elementos posterior � calulado pela soma dos dois anteriores.
Ex: 0 1 1 2 3 5 8 13 21 34 55 89
*/

int main(){
    setlocale(LC_ALL,"");
    printf("---------------------------------\n");
    printf("       SEQU�NCIA DE FIBONACCI    \n");
    printf("---------------------------------\n");


    int tot;
    printf("Quantos elementos voc� quer mostrar? ");
    scanf("%d",&tot);

    int num1=0, num2=1, num3;
    printf("%d  ",num1);
    Sleep(400);
    printf("%d  ",num2);
    Sleep(400);

    for(int i=3;i<= tot;i++){
        num3 = num1 + num2;
        printf("%d  ",num3);
        Sleep(400);
        num1 = num2;
        num2 = num3;
    }
    printf("FIM!\n\n");


return 0;
}
