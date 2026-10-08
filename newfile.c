#include<stdio.h>

int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        /* code */printf("%d * %d = %d\n",num,i,num*i);
    }
    
}