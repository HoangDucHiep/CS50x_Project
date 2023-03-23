#include <stdio.h>
#include<cs50.h>
#include <math.h>

int main(void)
{
long  x = get_long("Number: ");
int  digit = 0, sum = 0;
//digit is used for odd and even checker.
long y = x;

//checksum card digits

while (y != 0)
{
    int sumeven = 0, sumodd = 0;
    int rem = y % 10;
    digit++;
    if (digit % 2 == 0)                        //if digit is even
    {
        int multiply = rem * 2;
        if (multiply == 0)
        {
            sumeven += multiply;
        }

        else
        {
            while (multiply != 0)                   //adding all  digits after
            {
                sumeven += multiply % 10;
                multiply /= 10;                   //minus last digit of multiply
            }
        }
    }
    else                                 //if digit is odd
    {
        sumodd += rem;
    }
    y /= 10;                              //minus last digit from y

    sum += sumeven + sumodd;
}




//check for valid credit card
if (digit != 13 && digit != 15 && digit != 16) //for first if
{
    printf("INVALID\n");
}

else if (sum % 10 == 0)
{
    if (digit == 16) //if digit is 16
    {
        if (x / 100000000000000 >= 51 && x / 100000000000000 <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (x / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }
        else    //if digit is not 16
        {
            printf("INVALID\n");
        }
    }

    else if (digit == 15)
    {
        if (x / 10000000000000 == 34 || x / 10000000000000 == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }



    else  if (digit == 13)
    {
        if (x / 1000000000000 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }

    }

}


else
{
    printf("INVALID\n");
}
}
