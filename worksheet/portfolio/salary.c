
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Oliver Rae-Moore
 * ID:201956453
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NI = 0.08f;
   float tax =0.15f;
    // calculate the deductions and final take-home salary
    float NIcontribution = salary * NI ;
    float takehome = salary - NIcontribution; 
    float taxable = takehome - 12500.0f;
    float taxcontribution = taxable * tax;
    takehome = takehome - taxcontribution;
    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    printf("Salary £%.2f\n",salary);
    //printf("NI contribution £...",var_name);
    printf("NI contribution £%.2f\n",NIcontribution);
    //printf("Tax contribution £...",var_name);
    printf("Tax contribution £%.2f\n",taxcontribution);
    //printf("Take home salary £...",var_name);
    printf("Take home salary £%.2f\n",takehome);

    return 0;
 }