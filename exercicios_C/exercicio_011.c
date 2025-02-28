#include <stdio.h>
#include <locale.h>
/*
Ex 011; Faça um programa que leia vários número
(o vlaor 9999 faz o programa parar)
No final de tudo mostre na tela:
- Quantos valores foram digitados
- A soma entre eles
- Qual foi o maior valor digitado
OBS:Não consider nunca o FLAG como parte dos dados.
*/

int main(){
    setlocale(LC_ALL,"");

    int c = 1,num,tot=0,soma=0,maior=0;
    float media;
    while ( c != 9999 ){
        printf("------------------------------------------\n");
        printf("%dº VALOR [Digite 9999 para encerrar]\n",c);
        printf("-------------------------------------------\n");
        printf("Número: ");
        scanf("%d",&num);


        if(num != 9999){
            c++;
            tot++;
            soma += num;
            if(c == 1){
                maior = num;
            }else{
                if(num > maior){
                    maior = num;
                }
            }
        }else{
            break;
        }
    }
    media = (float)soma / tot;
    printf("============================================\n");
    printf("Ao todo, foram digitado(s) %d valores.\n",tot);
    printf("A soma entre esses valores é %d\n",soma);
    printf("A média entre eles é %.1f\n",media);
    printf("O maior valor digitado foi %d\n",maior);
    printf("============================================\n\n");

return 0;
}
