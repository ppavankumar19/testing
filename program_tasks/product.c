/*
step-1: start
step-2: print "To compute product of three numbers.\n"
step-3: print "Enter the first number: "
step-4: read Number1
step-5: print "Enter the second number: "
step-6: read Number2
step-7: print "Enter the third number: "
step-8: read Number3
step-9: Product = Number1 * Number2 * Number3
step-10: print "The product of " + Number1 + ", " + Number2 + " and " + Number3 + " is " + Product + 
".\n"
step-11: stop
*/

#include <stdio.h>

int main()
{
    int number1, number2, number3, product;

    printf("To multiply three numbers.\n");
    printf("Enter the first number: ");
    scanf("%i", &number1);
    printf("Enter the second number: ");
    scanf("%i", &number2);
    printf("Enter the third number: ");
    scanf("%i", &number3);
    product = number1 * number2 * number3;
    printf("The product of %i, %i and %i is %i.\n", number1, number2, number3, product);

    return 0;
}
