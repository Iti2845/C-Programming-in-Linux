#include<stdio.h>
int factorial(int n){
        int fact = 1;
        for(int i=1;i<=n;i++){
                fact *=i;
        }
        return fact;
}
int main(){
        int num,numb,sum=0,digit;
        printf("Enter a number\n");
        scanf("%d",&num);
        numb=num;
        while(numb>0){
                digit = numb%10;
                sum += factorial(digit);
                numb /=10;
        }
        if(sum == num){
                printf("%d is a strong number\n",num);
        }else{
                printf("%d is not a strong number\n",num);
        }
        return 0;
}

