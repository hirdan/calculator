#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float num1,num2,ans;
    int op;
    char ch;
    label:
     printf("Enter the first number:");
     scanf("%f",&num1);
     printf("Enter the second number:");
     scanf("%f",&num2);
     printf("\nEnter the operation:");
     scanf(" %d",&op);
     switch(op)
     {
        case 1: ans = num1+num2;
                printf("%f",ans);
                break;
        case 2: ans = num1-num2;
                printf("%f",ans);
                break;
        case 3: ans = num1*num2;
                printf("%f",ans);
                break;
        case 4: ans = num1/num2;
                printf("%f",ans);
                break;
        case 5: ans = (int)num1%(int)num2;
                printf("%f",ans);
                
                break;
        default: printf("Wrong choice!");
     }
     printf("\nPress Y to continue and N to exit.");
     scanf("%c",ch);
     if(ch=='Y'||ch=='y')
        goto label;
     else if(ch=='N'||ch=='n')
        exit(-1);
}
