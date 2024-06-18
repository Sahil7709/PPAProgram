#include<stdio.h>

int main()
{
    int Standard=0;

    printf("Enter Your  Standard: \n");
    scanf("%d",&Standard);

    switch(Standard)
    {
        case 1:
                printf("Your Exam is at 7am\n");
                break;
        case 2:
                printf("Your Exam is at 8am\n");
                break;
        case 3:
                printf("Your Exam is at 9am\n");
                break;
        case 4:
                printf("Your Exam is at 10am\n");
                break;
        default:
                printf("Wrong Choice\n");
        
    }
    return 0;
}