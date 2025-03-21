#include<stdio.h>
int main(){
float r,area,c;
printf("Input the radius of the circle: ");
scanf("%f",&r);
area=3.1416*r*r;
printf("\n The area of the circle is: %f",area);
c=2*3.1416*r;
printf("\n The circumference of the circle is %f",c);
return 0;
}
