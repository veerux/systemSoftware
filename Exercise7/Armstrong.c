/*
 * File:   		Armstrong.c
 * Author:		Veera Määttänen
 * Description:	Adding numbers in range 0-100000 to the list,
 								if they are Armstrong number.
 */

#include <stdio.h>
#include <math.h>
#include "Armstrong.h"

// to count how many digits are in one number
int order(int n) {
	int exp = 0;
	while (n) {
		exp++;
		n = n / 10;
	}
	return exp;
}

int testArmstrong(int *arrPointer) {
	for (int i = 0; i <= 100000; i++) {
		int exp = order(i);
		int temp = i, sum = 0;

		// counting the sum of digits in power of the order
		while (temp) {
			int digit = temp % 10;
			sum += pow(digit, exp);
			temp = temp / 10;
		}

		// adding the integers to the list if the sum is equal to the original number
		if (sum == i) {
			*arrPointer = i;
			arrPointer += 1;
		}
	}
	return *arrPointer;
}
