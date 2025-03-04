#include <stdio.h>
#include <locale.h>
#include <ctype.h>
int main(){
    setlocale(LC_ALL,"");
    int pessoa,ref;
    printf("Quantas pessoas vamor cadastrar? ");
    fflush(stdin);
    scanf("%d",&pessoa);
    printf("Qual será o peso de referencia? ");
    fflush(stdin);
    scanf("%d",&ref);

    int c = 1,peso,m_acima = 0,h_acima = 0;
    char sexo;
    while(c <= pessoa){
        printf("------------------------------\n");
        printf("PESSOA %d de %d\n",c,pessoa);
        printf("-------------------------------\n");
        printf("Peso: (Kg) ");
        fflush(stdin);
        scanf("%d",&peso);

        printf("Sexo: [M/F] ");
        fflush(stdin);
        sexo = getchar();
        if(peso <= ref){
            printf("======== PESO DENTRO DO LIMITE =========\n");
        }else{
            printf("======== PESO ACIMA DO LIMITE ===========\n");
            if(toupper(sexo) == 'M'){
                h_acima++;
            }
            if(toupper(sexo) == 'F'){
                m_acima++;
            }
        }

        c++;
    }
    printf("--------------- RESULTADO ------------------\n");
    printf("Ao todo, temos %d homem(s) e %d mulher(s)\n",h_acima,m_acima);
    printf("acima do peso de referência.");


 return 0;
}
