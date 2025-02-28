#include <stdio.h>
#include <locale.h>
#include <windows.h>
/* Faça um programa que leia dois operandos de uma
expressão e mostre um menu que permita o usuário escolher
que operação realizar:
[1] Adição
[2] Subtração
[3] Multiplicação
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
            printf("\n======= ESCOLHA UMA OPERAÇÃO =========\n");
            printf("[1] Adição\n");
            printf("[2] Subtração\n");
            printf("[3] Multiplicação\n");
            printf("[4] Entrar com novos dados\n");
            printf("[5] Sair\n");
            printf(">>>>>>> SUA OPÇÃO: ");
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
                printf("===== Opção inválida =======\n");
                break;

            }
            Sleep(2000);

        }
        printf("======= VOLTE SEMPRE ==========\n\n");

return 0;
}
