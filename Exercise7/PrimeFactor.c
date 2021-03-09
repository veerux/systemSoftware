/*
 * File:   		PrimeFactor.c
 * Author: 		Veera Määttänen
 * Description: Printing out the prime factors for each integer in the array.
 */

#include <stdio.h>
#include <math.h>
#include "PrimeFactor.h"

int isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void testPrime(int *arrPointer, int size) {
	//looping through the array
	for (int i = 0; i < size; i++) {
		int temp = *arrPointer;
		if (temp >= 2) {
			//printing out the number if it's a prime number
			if (isPrime(temp)) {
				printf("%d is a prime number!", *arrPointer);
				temp = 1;
			}
			// calculating the prime factors and printing them
			if (temp > 2) {
				printf("The prime factors for number %d are: ", *arrPointer);
				while (temp % 2 == 0) {
					printf("%d ", 2);
					temp = temp / 2;
				}
				for (int j = 3; j <= sqrt(temp); j = j + 2) {
					while (temp % j == 0) {
						printf("%d ", j);
						temp = temp/j;
					}
				}
				if (temp > 2)
		        printf ("%d ", temp);
			}
		}

		//for ones and zeros
		else if (temp == 1 || temp == 0 ) {
			printf("%d is not a prime or composite number.", temp);
		}

		/* I chose this approach as prime numbers are greater than 1
		and so prime factors can't be negative either */
		else {
			printf("%d is a negative integer. Only positive numbers have prime factors.", temp);
		}
		printf("\n");
		arrPointer += 1;
	}
}
