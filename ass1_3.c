#include<stdio.h>
int main(){
        int n,i,t1=0,t2=1, nextTerm;
        printf("enter terms");
        scanf("%d",&n);
        printf("%d %d",t1,t2);
        nextTerm=t1+t2;
        for(i=3;i<=n;i++){
        printf("%d",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
        }
         printf("\n");
        return 0;
}

