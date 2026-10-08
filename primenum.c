#include<stdio.h>

int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int isprime = 0;

    for (int i = 2; i < num - 1; i++)
    {
        /* code */if (num % i == 0)
        {
            /* code */isprime = 1;
            break;
        }
        
    }

    if (isprime == 1)
    {
        /* code */printf("number is not a prime number");
    }
    else
    {
        printf("Number is a prime number");
    }
    
    
    return 0;
    
}