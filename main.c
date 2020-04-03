#include <stdio.h>
#include <stdlib.h>
//find max number
int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int temp=0;
    printf("\n Please enter first number: ");
    scanf("%d",&num1);
    printf("\n Please enter Second number: ");
    scanf("%d",&num2);
    printf("\n Please enter Third number: ");
    scanf("%d",&num3);
    temp= num1;
    if(num2>=temp){
     temp=num2;}
     else{}
      if(num3>=temp){
            temp =num3;


     }else{}
       printf("\n max number is: %d ",temp);



    return 0;
}
