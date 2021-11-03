/*
 * basicClassification.cpp
 *
 *  Created on: Oct 24, 2021
 *      Author: mohanad
 */

#include "NumClass.h"
#include <math.h>
#include <stdio.h>



int isStrong(int num)
{
    int temp = num;
    int counter1 = 1;
    int counter2 = 0;
    if (num <= 0)
    {
        return 0;
    }

    while (temp != 0)
    {
        for (int i = 1; i <= temp % 10; i++)
        {
            counter1 *= i;
        }
        counter2 += counter1;
        counter1 = 1;
        temp = temp / 10;
    }
    if (counter2 == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}






int isPrime(int number){

      if (number <= 0)return 0;

	int i;
		for(i=2;i<=number/2;i++)
		{
			if(number%i!=0)
				continue;
			else
				return 0;  // false
		}
		return 1; // the loop is stop then the number is prime (true)

}




