#include <stdio.h>
int main() {
    //declaração de 3 números
    int num1, num2, num3;
    
    //input dos números
    printf("Insere os números: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    //guardar os números num array
    int numbers[] = {num1, num2, num3};
    
    //calcular o tamanho do array
    int arraySize = sizeof(numbers)/sizeof(numbers[0]);
    
    //loop a percorrer o array
    for(int i=0; i<arraySize;i++){
        //determinar se é par ou ímpar
        if ( numbers[i] % 2 == 0)
            printf("%d é par.\n", numbers[i]);
        else
            printf("%d é ímpar.\n", numbers[i]);
    }
    return 0;
}



