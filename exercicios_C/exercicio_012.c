#include <stdio.h>
#include <locale.h>
#include <windows.h>
/* Fa�a um programa que leia dois operandos de uma
express�o e mostre um menu que permita o usu�rio escolher
que opera��o realizar:
[1] Adi��o
[2] Subtra��o
[3] Multiplica��o
[4] Entrar com novos dados
[5] Sair
*/
int main(){
    setlocale(LC_ALL,"");

    int n1,n2,opc=0,resp;

    printf("Operando 1: ");
    scanf("%d",&n1);
    printf("Operando 2: ");
    scanf("%d",&n2);
         while(opc != 5){
            printf("\n======= ESCOLHA UMA OPERA��O =========\n");
            printf("[1] Adi��o\n");
            printf("[2] Subtra��o\n");
            printf("[3] Multiplica��o\n");
            printf("[4] Entrar com novos dados\n");
            printf("[5] Sair\n");
            printf(">>>>>>> SUA OP��O: ");
            scanf("%d",&opc);

            switch (opc){
            case 1:
                printf("------------------------\n");
                printf("Calculando %d + %d = %d\n",n1,n2,(n1+n2));
                printf("------------------------\n");
                break;
            case 2:
                printf("------------------------\n");
                printf("Calculando %d - %d = %d\n",n1,n2,(n1 - n2));
                printf("------------------------\n");
                break;
            case 3:
                printf("------------------------\n");
                printf("Calculando %d * %d = %d\n",n1,n2,(n1 * n2));
                printf("------------------------\n");
                break;
            case 4:
                printf("Operando 1: ");
                scanf("%d",&n1);
                printf("Operando 2: ");
                scanf("%d",&n2);
                break;
            case 5:
                printf("======= SAINDO ========\n");
                Sleep(1000);
                break;
            default:
                printf("===== Op��o inv�lida =======\n");
                break;

            }
            Sleep(2000);

        }
        printf("======= VOLTE SEMPRE ==========\n\n");

return 0;
}
