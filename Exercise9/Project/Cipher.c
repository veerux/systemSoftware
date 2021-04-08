/*
 * File:   		Contact.c
 * Author:		Veera Määttänen
 * Description: Opens a file and reads the text. Changes it according to
                given key and saves to new file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Cipher.h"

char change(char c, int key);

int toCipher() {
  int key, temp, status;
  printf("\n--- PLAINTEXT TO CIPHERTEXT ---\n");
  printf("Give a key: ");
  status = scanf("%d", &key);
	while(status != 1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Invalid key. Please give an integer: ");
		status = scanf("%d", &key);
	}

  FILE *filePointer = NULL;
  FILE *fileWriter = NULL;

  filePointer = fopen("Text.txt", "r");
  if (filePointer == NULL) {
    printf("Error: Couldn't open the file.\n");
    return 0;
  }

  fileWriter = fopen("Ciphertext.txt", "w");
  if (fileWriter == NULL) {
    printf("Error: Couldn't open the file.\n");
    return 0;
  }

  char c;
  while ((c = fgetc(filePointer)) != EOF) {
    fprintf(fileWriter, "%c", change(c, key));
  }
  fclose(filePointer);

  fclose(fileWriter);
  return 0;
}

char change(char c, int key) {
  // changes the alphabets according to the key
  // using ascii
  char result;
  if (isalpha(c)) {
    if (isupper(c)) {
      result = ((c - 65 + key) % 26) + 65;
    }
    if (islower(c)) {
      result = ((c - 97 + key) % 26) + 97;
    }
  }
  else {
    result = c;
  }
  return result;
}
