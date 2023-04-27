/*Главным достоинством пузырьковой сортировки является то, что ее легко запрограммировать. Однако пузырьковая сортировка выполняется медленно. Это становится очевидным при сортировке больших массивов.*/

#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int i, pass, hold;

    printf("Data items in original order\n");
    for (i = 0; i <= SIZE - 1; i++){
        printf("%4d", a[i]);
    }
    printf("\n");

    for (pass = 1; pass <= SIZE - 1; pass++)        /* проходы */
    {       
        for (i = 0; i <= SIZE - 2; i++)             /* один проход */
        {
            if (a[i] > a[i + 1]){                   /* одно сравнение */
                hold = a[i];                        /* одна перестановка */
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    printf(" \nData items in ascending order\n");
    for (i = 0; i <= SIZE - 1; i++){
        printf("%4d", a[i]);
    }
    printf("\n");


    return 0;
}