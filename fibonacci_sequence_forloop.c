// PROGRAMM TO PRINT FIBONACCI SEQUENCE UPTO GIVEN NUMBER
// INCLUDING HEADER FILES
#include <stdio.h>
// MAIN FUNCTION
int main()
{
    // DECLARING THE VARIABLES
    int num1 = 0, num2 = 1, i, n;
    printf("Enter the number of iterations \n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        // THIS ALL GO ON A LOOP UNTIL LOOP BECOME FALSE
        printf(" %d\n", num1);
        // ADDING VALUES OF NUM1 AND NUM2 AND ASSINGNING IT TO SUM
        int sum = num1 + num2;
        // ASSIGNING NUM2 VALUE TO NUM1
        num1 = num2;
        // ASSIGNING SUM VALUE TO NUM2
        num2 = sum;
    }

    return 0;
}
