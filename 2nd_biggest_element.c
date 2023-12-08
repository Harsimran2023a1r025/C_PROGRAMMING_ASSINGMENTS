// PROGRAMM TO FIND SECOND LARGEST ELEMENT IN AN ARRAY
// INCLUDING HEADER FILES
#include <stdio.h>
// MAIN FUNCTION
void main()
{
    // DECLARING VARIABLES
    int n;
    printf("Enter the limit\n");
    scanf("%d", &n);
    int a[n], i;
    printf("Enter array elements\n");
    // MAKING LOOP TO ENTER THE ELEMENTS IN AN ARRAY
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int big, sbig;
    // DECLARING INDEX POSITION 0 TO BIG AND INDEX POSITION 1 TO SBIG
    big = a[0];
    sbig = a[1];
    for (i = 1; i < n; i++)
    {
        // APPLYING THE CONDITIONS
        if (big < a[i])
        {
            sbig = big;
            big = a[i];
        }
        else if (sbig < a[i])
            sbig = a[i];
    }
    // PRINTING THE OUTPUT
    printf("Second largest element is %d\n", sbig);
}