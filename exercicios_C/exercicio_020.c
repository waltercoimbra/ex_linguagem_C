#include <stdio.h>
#include <locale.h>
#include <windows.h>
/*Ex_20: Fa�a um programa que leia um n�mero inteiro

*/

int main(){
    setlocale(LC_ALL,"");

    int num,tot=0;

    printf("Digite um n�mero: ");
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
        printf("\nO n�mero %d foi divis�vel %d vezes.\n",num,tot);
        printf("Logo, n�o � primo.\n");
    }else{
        printf("\nO n�mero %d foi divisivel %d vezes.\n",num,tot);
        printf("Ent�o o n�mero %d � primo\n",num);
    }





return 0;
}
