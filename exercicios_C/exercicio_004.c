#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
    setlocale(LC_ALL,"");

    int num;
    int par = 0,impar =0;
    int c = 1;
    while(c <= 5){
        printf("Digite o %dº valor: ",c);
        scanf("%d",&num);
        if(num % 2 == 0){
            par += num;
        }else{
            impar += num;
        }
        c++;
    }
    printf("----------------------------------\n");
    printf("A soma dos pares deu %d\n",par);
    printf("A soma dos impares deu %d\n",impar);
    printf("------------------------------------\n");

  return 0;
}
