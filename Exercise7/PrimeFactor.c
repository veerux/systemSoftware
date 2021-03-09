/*
 * File:   		PrimeFactor.c
 * Author: 		Veera Määttänen
 * Description: Printing out the prime factors for each integer in the array.
 */

#include <stdio.h>
#include <math.h>
#include "PrimeFactor.h"



void testPrime(int *arrPointer, int size) {
	//looping through the array
	for (int i = 0; i < size; i++) {
		for (int i = 2; i < *arrPointer; i++) {
			if (*arrPointer % i == 0) {
				printf("it is not prime");
			}
			printf("It is prime");
		}
		arrPointer += 1;
	}
}
