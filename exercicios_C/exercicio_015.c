#include <stdio.h>
#include <locale.h>
/*Exercicio 015: Escreva um programa que leia v�rios n�meros usando
a estrutura FACA..ENQUANTO. No final, mostr:
- Quantos valores foram digitados
- Quantos valores pares foram digitados
- Qual foi o menor valor impar digitado
*/

int main(){
    setlocale(LC_ALL,"");
    int n,tot=0,par=0,totimp=0,menorImp=0;
    char resp;
    do{
        printf("Digite o %d� n�mero: ",tot+1);
        fflush(stdin);
        scanf("%d",&n);
        tot++;
        if(n % 2 == 0){
            par++;
        }else{
            totimp++;
            if(totimp == 1){
                menorImp = n;
            }else{
                if(n < menorImp){
                    menorImp = n;
                }
            }
        }



        printf("Quer continuar? [S/N]");
        fflush(stdin);
        resp = getchar();

    }while(resp == 'S' || resp == 's');
    printf("========= RESULTADOS =============\n");
    printf("Ao todo voc� digitou %d n�meros\n",tot);
    printf("Voc� digitou %d n�meros pares\n",par);
    printf("O menor valor IMPAR digitado foi %d\n",menorImp);
    printf("----------------------------------\n\n");

return 0;
}
