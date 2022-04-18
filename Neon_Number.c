#include <stdio.h>
 
int main()
{
    int num, digit, sum =0;
    
    //Input a number
   
    scanf("%d",&num);
        
    //Calculate square of the input
    int square = num*num;
    
    //Sum the digits of the square
    while(square!=0){
        digit = square%10;
        sum += digit;
        square = square/10;
    }
    
    //Check if sum is equal to the input number
    if(sum == num)
        printf("Neon Number ");
    else
        printf("Not Neon Number ");
 
    return 0;
}