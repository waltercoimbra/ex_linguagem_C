#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int c = 1,num,par = 0,impar = 0,soma_par = 0,soma_impar = 0;
    while (c <= 5){
        printf("Digite um n�mero inteiro: ");
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
    printf("Voc� digitou %d n�meros pares.",par);
    printf("E a m�dia entre eles � %.1f\n\n",m_par);
    printf("Voc� digitou %d n�meros impares.",impar);
    printf("E a m�dia entre else � %.1f\n\n",m_impar);

return 0;
}
