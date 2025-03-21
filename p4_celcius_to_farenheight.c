#include<stdio.h>
int main(){
    int option;
    float c,f;
    printf("Select a option: ( enter 1 or 2)\n");
    printf(" 1.Covert Celsius to Fahrenheit\n 2. Conver Fahrenheit to Celsius\n");
    scanf("%d", &option );
    if (option==1){
        printf ("Converting Celcius to Fahrenheit...\n Enter the temperature in Celcuis: ");
        scanf("%f",&c);
        f= (c*(9/5)) + 32;
        printf("Temperature in Fahrenheit is %f",f);
    }
    else if(option==2){
    printf ("Converting Fahrenheit to Celcius\n Enter the temperature in Fahrenheit: ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("Temperature in Celsius is %f",c);
    }
    else {
        printf("Watch carefully! There is no such option");
    }
    return 0;
}
