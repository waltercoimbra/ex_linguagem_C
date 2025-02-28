#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    printf("-----------------------------\n");
    printf("  TRÊS VALORES EM ORDEM      \n");
    printf("-----------------------------\n");

    int n1,n2,n3;
    int maior,menor,meio;

    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%d",&n1);
    printf("Segungo valor: ");
    fflush(stdin);
    scanf("%d",&n2);
    printf("Terceiro valor: ");
    fflush(stdin);
    scanf("%d",&n3);

    if(n1 > n2){
        if(n3 > n1){
            maior = n3;
            meio = n1;
            menor = n2;
        }else if(n3 > n2){
            maior = n1;
            meio = n3;
             menor = n2;
        }else{
            maior = n1;
            meio = n2;
            menor = n3;
        }
    }else if(n3 > n2){
        maior = n3;
        meio = n2;
        menor = n1;
    }else if(n3 > n1){
        maior = n2;
        meio = n3;
        menor = n1;

    }else{
        maior = n2;
        meio = n1;
        menor = n3;
    }
    printf("--------------------------------");
    printf("\nMenor: %d ",menor);
    printf("\nIntermediario %d ",meio);
    printf("\nMaior %d ",maior);
    printf("\n---------------------------------\n\n");
}
