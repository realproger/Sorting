/* 2 loops are needed
Selection Sort in C is a sorting algorithm that is used to sort a list of elements in either an ascending order or a descending order.

This algorithm chooses the minimum element from the list of elements and swaps it with the first element of the list. 
Similarly, it chooses the second minimum element from the list and swaps it with the second element of the list. 
It continue swapping the elements until all the elements of the list are completely sorted in either direction.
*/

// #include <stdio.h>
// int main()
// {
//     int n = 10;
//     int a[] = {3,2,6,5,4,7,8,9,5,1};
//     int min_index;

//     for(int i = 0; i < n - 1; i++) {
//         min_index = i;
//         for(int j = i + 1; j < n; j++) {
//             if(a[min_index] > a[j]) {
//                 min_index = j;
//             }
//         }
//         if(min_index != i)
//         {
//             /*Значение этой переменной заключается в том, чтобы поменять местами меньшие цифры в начале массива, чтобы наш массив автоматически сортировался. Однако затем мы выберем наименьшую цифру из массива и заменим ее на arr[min_index].*/
//             int temp = a[i];                    
//             a[i] = a[min_index];
//             a[min_index] = temp;
//         }
//     }
//     printf("Sorted Array: ");
//     for(int i = 0; i < n; i++)  {
//         printf(" %d", a[i]);
//     }
//     return 0;
// }

/*********************************************************/
/*В этом подходе мы будем использовать два вложенных цикла for, первый цикл i будет выполняться от 0 до меньше n, тогда как второй цикл j будет работать от i+1 до менее чем n.

Внутри цикла, если j-й элемент меньше, чем i-й элемент, мы меняем местами i-й и j-й элементы друг с другом и аналогичным образом проверяем и другие элементы.*/

#include <stdio.h>
int main()
{
    int n = 10;
    int arr[] = {3,2,6,5,4,7,8,9,5,1};
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)  {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*********************************************************/
#include <stdio.h>
int main()
{
    int n = 8;
    int arr[] = {5,4,3,6,8,1,9,2};
    
    int i = 0, j;
    while( i < n) {
        j = i + 1;
        while( j < n) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)  {
        printf(" %d", arr[i]);
    }
    return 0;
}

/*********************************************************/

#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main()
{
    int n = 8;
    int arr[] = {5,3,6,2,7,1,7,4};
    selectionSort(arr, n);
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++)  {
        printf(" %d ", arr[i]);
    }
    return 0;
}