/*
 * advancedClassificationLoop.c
 *
 *  Created on: Oct 24, 2021
 *      Author: mohanad
 */

#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isPalindrome(int number)
{
  int temp=0, remaind=0, t=0;


temp=number;

  // loop to repeat
  while( number!=0 )
  {
     // find last digit
	  remaind = number % 10;

     // calculate reverse
     t = t*10 + remaind;

     // remove last digit
     number /= 10;
  }


  if ( t == temp ) return 1;
  else return 0;
}

 int isArmstrong(int n){

	int temp=0;
	int r=0;
	int sum=0;
	temp=n;
	while(n>0)
	{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
	}
	if(temp==sum)
	return 1;
	else
	return 0;


}



