//Interactive loop that scans pair of numbers

#include <stdio.h>

int main()
{
    int l1,l2; //used to declare variables to store two numbers
    
    printf("Input pair of numbers: ");
    scanf("%d%d",&l1,&l2);      //input two integers
    
    while(! (l2/l1==2 && l2%l1==0)){ //continue in loop untill l1 exactly divides l2 to two halves
        printf("Input pair of numbers: ");
        scanf("%d%d",&l1,&l2);  //input another pair of integers
    }
    return 0;
}
