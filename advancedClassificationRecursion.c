/*
 * advancedClassificationRecursion.c
 *
 *  Created on: Oct 24, 2021
 *      Author: mohanad
 */

#include "NumClass.h"
#include <math.h>
#include <stdio.h>
int isArmstrong(int number);
int isPalindrom(int num);
int reverse(int num);
int isArmstrongNumber2(int number);



int isArmstrongNumber2(int number)
{
     if(number>0)
    return ((int)(pow(number%10,3)) +isArmstrongNumber2(number/10));
     return 0;
}

int isArmstrong(int number){

        return (isArmstrongNumber2(number)==number)? 1:0;

    }




/**
 * Recursive function to find reverse of any number
 */
int reverse(int num)
{
    /* Find number of digits in num */
    int digit = (int)(log10(num));

    /* Recursion base condition */
    if(num == 0)
        return 0;

    return ((num%10 * (int)(pow(10.0, digit))) + reverse(num/10));
}

int isPalindrome(int num){

	  if(num == reverse(num))
	    {
	        return 1;
	    }

	    return 0;
}
