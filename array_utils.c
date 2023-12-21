

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
