#include<stdio.h>
int main(){
       int n,sum =0,i;
       printf("Enter a number : ");
       scanf("%d",&n);
       while(n!=0){
               i=n%10;
               sum +=i;
               n/=10;
       }
       printf("Sum of digits of a number %d\n",sum);
       return 0;
}

