#include<stdio.h>
int main(){
        int choice;
        float temp,f,c;
        printf("1 celcius to fahrenheit\n");
        printf("2 fahrenheit to celcius\n");
        printf("Choose a choice 1 or 2\n");
        scanf("%d",&choice);
        switch(choice){
case 1:
                printf("Temperature in celcius");
                scanf("%f",&temp);
                f=(temp*9/5)+32;
                printf("%.2f in fahrenheit is %.2f\n",temp,f);
                break;
case 2:
                printf("Temperature in fahrenheit");
                scanf("%f",&temp);
                c=(temp-32)*5/9;
                printf("%.2f in celcius is %.2f\n",temp,c);
                break;
default:
                printf("invalid input\n");
        }
        return 0;
}

