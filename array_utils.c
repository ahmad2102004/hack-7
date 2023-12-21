

//place your function definitions here
#include<stdio.h>
#include "array_utils.h"

// Question : 1
int main(){

int size;
printf("\nEnter size of your array : ");
scanf("%d",&size);

int arr[size];

printf("\nEnter Elements of Your array with widespace : ");

for(int i=0;i<size;i++){

scanf("%d",&arr[i]);

}

int x;
printf("\nEnter Element of array you want to search : ");
scanf("%d",&x);

printf("\nResult : %d",contains(arr , size , x));

}
//question 2

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int x = 5;
    int i = 2;
    int j = 6;

    // if x is within the range i, j
    if (containsWithin(arr, size, x, i, j)) {
        printf("%d is within the range [%d, %d]\n", x, i, j);
    } else {
        printf("%d is not within the range [%d, %d]\n", x, i, j);
    }

    return 0;
}
//question 2

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int x = 5;
    int i = 2;
    int j = 6;

    // if x is within the range i, j
    if (containsWithin(arr, size, x, i, j)) {
        printf("%d is within the range [%d, %d]\n", x, i, j);
    } else {
        printf("%d is not within the range [%d, %d]\n", x, i, j);
    }

    return 0;
}

