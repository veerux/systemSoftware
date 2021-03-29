/*
 * File:   		Pet.c
 * Author:		Veera Määttänen
 * Description: Creating a struct pet and printing it out.
 */

#include <stdio.h>
#include <stdlib.h>

#include "Pet.h"

struct Pet {
        char name[20];
        int age;
        float weight;
};

int createPet() {
  int numPets;
  printf("How many pets do you have? ");
  scanf("%i", &numPets);

  struct Pet *pets = NULL;
  pets = (struct Pet *)malloc(numPets * sizeof(struct Pet));
  if (pets == NULL) {
    printf("Dynamic memory allocation did not succeed.");
    return 0;
  }

  for (int i = 0; i < numPets; i++) {
    printf("What's your pets name, age and weight? ");
    scanf("%s %i %f", (pets + i)->name, &(pets + i)->age, &(pets + i)->weight);
  }
  printf("\n");

  for (int i = 0; i < numPets; i++) {
    printf("Name: %s\nAge: %i\nWeight: %.1f\n\n", (pets+i)->name, (pets+i)->age, (pets+i)->weight );
  }

  free(pets);
  return 0;
}
