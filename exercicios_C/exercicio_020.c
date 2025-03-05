#include <stdio.h>
#include <locale.h>
#include <windows.h>
/*Ex_20: Faça um programa que leia um número inteiro

*/

int main(){
    setlocale(LC_ALL,"");

    int num,tot=0;

    printf("Digite um número: ");
    scanf("%d",&num);

    for(int i = 1; i <= num;i++){
        if(num % i == 0){
            printf("[%d]  ",i);
            //Sleep(400);
            tot++;
        }else{
            printf("%d ",i);
            Sleep(400);
        }

    }
    if(tot > 2){
        printf("\nO número %d foi divisível %d vezes.\n",num,tot);
        printf("Logo, não é primo.\n");
    }else{
        printf("\nO número %d foi divisivel %d vezes.\n",num,tot);
        printf("Então o número %d é primo\n",num);
    }





return 0;
}
