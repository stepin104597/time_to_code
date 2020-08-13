#include <stdio.h>


int main(){
    int input,count,check=0;
    printf("**********Check whether the given number is Prime Number*************\n\n ");
    printf("Enter the Integer number:");
    scanf("%d",&input);
    printf("\tEntered number is %d\n", input);
    if(input==1)
    {
        printf("\tThe number is neither prime nor composite\n");
    }
    else
    {
        for(count=2;count<=input;count++)
    {
      if(input%count==0)
        check++;
    }

    if (check==1)
    { printf("\tThe number is prime number");
    }
    else
        printf("\tThe number is composite");
    }
}
