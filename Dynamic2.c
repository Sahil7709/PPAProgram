#include<stdio.h>
#include<stdlib.h>   //for malloc,calloc,realloc & free

int main()
{
    int Arr[5]; //Static Memory allocation
    int Size=0;
    int *ptr=NULL;

    printf("Enter the Number of Elements: \n");
    scanf("%d",&Size);

    ptr=(int *)calloc(Size,sizeof(int));
    //=(int *)malloc(6*4)
    //=(int *)malloc(24)

    //Use the Memory

    free(ptr);

    return 0;
}