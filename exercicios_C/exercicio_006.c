#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int c = 1,num,par = 0,impar = 0,soma_par = 0,soma_impar = 0;
    while (c <= 5){
        printf("Digite um número inteiro: ");
        scanf("%d",&num);
        if(num % 2 == 0){
            par++;
            soma_par += num;
        }else{
            impar++;
            soma_impar += num;
        }
        c++;
    }
    float m_par = (float)soma_par / par ;
    float m_impar = (float)soma_impar / impar;
    printf("Você digitou %d números pares.",par);
    printf("E a média entre eles é %.1f\n\n",m_par);
    printf("Você digitou %d números impares.",impar);
    printf("E a média entre else é %.1f\n\n",m_impar);

return 0;
}
