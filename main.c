#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float num1,num2,ans;
    int oper;
    char ch;
    label:
     printf("Enter the first number:");
     scanf("%f",&num1);
     printf("Enter the second number:");
     scanf("%f",&num2);
      printf("\nEnter 1 to add both numbers");
     printf("\nEnter 2 to subtract both numbers");
      printf("\nEnter 3 to multiply both numbers");
      printf("\nEnter 4 to divide both numbers");
      printf("\nEnter 5 to find remainder of both numbers");
     printf("\nEnter the operation:");
     scanf(" %d",&oper);
     switch(oper)
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
