#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float num1,num2,ans;
    int oper;
    char choice;
    label:
     printf("Enter the first number:");
     scanf("%f",&num1);
     printf("Enter the second number:");
     scanf("%f",&num2);
      printf("\nPress 1 to add both numbers");
     printf("\nPress 2 to subtract both numbers");
      printf("\nPress 3 to multiply both numbers");
      printf("\nPress 4 to divide both numbers");
      printf("\nPress 5 to find remainder of both numbers");
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
        default: printf("Wrong Choice!");
     }
     printf("\nPress Y to continue and N to exit.");
     scanf("%c",choice);
     if(choice=='Y'||choice=='y')
        goto label;
     else if(choice=='N'||choice=='n')
        exit(-1);
}
