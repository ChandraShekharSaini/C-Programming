#include<stdio.h>
#include<math.h>
int main()
{      
     //C program to find power and square root of any number.
     //C program to find power and square root of any number.
    

     double n,a,root,power;
    printf("Enter the number :");
    scanf("%lf",&n);
    printf("Enter the power :");
    scanf("%lf",&a);
    
        power=pow(n,a);
    printf("Power of a number :%lf\n",power);

          root=pow(n,0.5);
    printf("Square root of number:%lf",n);

    return0

}