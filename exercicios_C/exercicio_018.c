#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL,"");

    int  num;
    printf("Digite um número: ");
    scanf("%d",&num);

    for(int i;i<=10;i++){
        printf("%d x %d = %d\n",num,i,(num*i));
        Sleep(400);
    }
    printf("============ FIM =============");

return 0;
}
