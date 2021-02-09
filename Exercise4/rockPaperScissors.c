/*
Title: rockPaperScissors
Description: Rock-paper-scissors game. Win 3 rounds.
Author: Veera Määttänen
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void rules(char * userInput, int compInput, int *userWins, int *compWins);
int checkWinner(int userWins, int compWins);
int randomInt();

int main() {
  printf("Rock-paper-scissors game with the computer.\nFirst to get 3 wins is the winner!\n\n");

  int userWins = 0;
  int compWins = 0;
  char userInput[10];

  while (checkWinner(userWins, compWins)) {
    int compInput = randomInt();
    printf("Rock paper or scissors?\nYou: ");
    scanf("%s", userInput);
    rules(userInput, compInput, &userWins, &compWins);
    printf("Current results\nYou: %i     Computer: %i\n\n", userWins, compWins);
  }
}

void rules(char * userInput, int compInput, int *userWins, int *compWins) {
  char dict[3][10] = {"rock", "paper", "scissors"};
  if (strcmp(dict[0], userInput) == 0) {
    if (compInput == 1) {
      printf("Computer: rock!\nIt's a tie! Go again.\n\n");
    }
    else if (compInput == 2) {
      *compWins += 1;
      printf("Computer: paper!\nComputer won this round.\n\n");
    }
    else if(compInput == 3) {
      *userWins += 1;
      printf("Computer: scissors!\nYou won this round!\n\n");
    }
  }
  else if (strcmp(dict[1], userInput) == 0) {
    if (compInput == 2) {
      printf("Computer: paper!\nIt's a tie! Go again.\n\n");
    }
    else if (compInput == 3) {
      *compWins += 1;
      printf("Computer: scissors!\nComputer won this round.\n\n");
    }
    else if(compInput == 1) {
      *userWins += 1;
      printf("Computer: rock!\nYou won this round!\n\n");
    }
  }
  else if (strcmp(dict[2], userInput) == 0) {
    if (compInput == 3) {
      printf("Computer: scissors!\nIt's a tie! Go again.\n\n");
    }
    else if (compInput == 1) {
      *compWins += 1;
      printf("Computer: rock!\nComputer won this round.\n\n");
    }
    else if(compInput == 2) {
      *userWins += 1;
      printf("Computer: paper!\nYou won this round!\n\n");
    }
  }
  else {
    printf("\nPlease write rock, paper or scissors.\n\n");
  }

  return;
}

int checkWinner(int userWins, int compWins) {
  if (userWins == 3) {
    printf("You have won the game!\n");
    return 0;
  }
  else if (compWins == 3) {
    printf("Computer has won the game!\n");
    return 0;
  }
  return 1;
}

int randomInt() {
  srand(time(0));
  int random = rand() % 3 + 1;
  return random;
}
