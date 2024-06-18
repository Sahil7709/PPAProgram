#include<stdio.h>
#include<stdlib.h>   //for malloc,calloc,realloc & free

int main()
{
   
    int *ptr=NULL;

    ptr=(int *)realloc(NULL,5*sizeof(int));
   

    //Use the Memory

    ptr=(int *)realloc(ptr,0);

    free(ptr);

    return 0;
}