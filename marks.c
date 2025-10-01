#include <stdio.h>

int main (){

    int maths , phy , chem , sum , avg;

    printf("Enter marks of Mathematics :");
    scanf("%d", & maths);
    
    printf("Enter marks of Physics :");
    scanf("%d", & phy);
    
    printf("Enter marks of Chemistry :");
    scanf("%d", & chem);
    
    sum = maths + phy + chem ;
    avg = sum / 3;
    
    printf("Sum of the subjects is :%d\n", sum);
    printf("Average of Subjects is :%d\n", avg);
    
    if (maths < 35 || phy < 35 || chem < 35){
        printf("You Failed");
    }
    else{
        printf("You Passed");
    }
    
    return 0;
}