#include <stdio.h>

int main() {
    int enter,end;
    float n1,n2,result;
    do{
        printf("enter 1 for sum \n enter 2 for subs \n enter 3 for div \n enter 4 for multification enter 5 for square \n");
        scanf("%d",&enter);
        switch(enter){
            case 1:
                printf("enter thevalue of number 1;\n");
                scanf("%f",&n1);
                printf("enter the number 2;\n");
                scanf("%f",&n2);
                result=n1+n2;
                printf("the addition of%f and %f is %2f",n1,n2,result);
            break;    
            case 2:
                printf("enter thevalue of number 1;\n");
                scanf("%f",&n1);
                printf("enter the number 2;\n");
                scanf("%f",&n2);
                result=n1-n2;
                printf("the substraction of%f and %f is %2f",n1,n2,result);
            break;
            case 3:
                 printf("enter thevalue of number 1;\n");
                scanf("%f",&n1);
                printf("enter the number 2;\n");
                scanf("%f",&n2);
                result=n1*n2;
                printf("the multification of%f and %f is %2f",n1,n2,result);
            break;    
            case 4:
                 printf("enter thevalue of number 1;\n");
                scanf("%f",&n1);
                printf("enter the number 2;\n");
                scanf("%f",&n2);
                result=n1/n2;
                printf("the divition of%f and %f is %2f",n1,n2,result);
            break ;
            case 5:
                 printf("enter thevalue of number 1;\n");
                scanf("%f",&n1);
                result=n1*n1;
                printf("the squre of%f and %f is %2f",n1,n2,result);
            break ;
            default:
            printf("not valid number");
        }
        printf("enter 1 to countinue and 0 to end ");
        scanf("%d",&end);

        
        
        
    }while(end!=0);

    return 0;
}