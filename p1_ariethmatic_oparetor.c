
#include <stdio.h>
int main(){
   float a,b,sum,sub,mul,div;
   int c,d, mod;
   printf("Enter the value of a: ");
   scanf("%f",&a);
   printf("Enter the value of b: ");
   scanf("%f",&b);
   sum=a+b;
   printf("The sum of a & b is: %f \n",sum);
   sub =a-b;
   printf("The sub of a & b is: %f\n",sub);
   mul = a*b;
   printf("The multiplication of a & b is: %f\n",mul);
   div = a/b;
   printf("The div of a & b is: %f\n",div);
   
   printf("For Modulas,\n Enter the value of c: ");
   scanf("%d",&c);
   printf("\nEnter the value of d: ");
   scanf("%d",&d);
   mod = c%d;
   printf("\nThe mod of a & b is: %d",mod);
    return 0;
}
