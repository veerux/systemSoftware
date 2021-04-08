/*
 * File:   		Vote.c
 * Author:		Veera Määttänen
 * Description: Voting system. Give the names of the candidates
                and the votes. Program will count the winner.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Vote.h"

struct Candidate {
  char name[10];
  int votes;
};

int voting(char name[10], int canCount, struct Candidate *candidates);
void printWinner(struct Candidate *candidate, int canCount);

int votingSystem() {
  int key, temp, status;
  printf("\n\n--- VOTING SYSTEM ---\n");
  printf("Give a number of candidates: ");
  status = scanf("%d", &key);
	while(status != 1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Invalid number. Please give an integer: ");
		status = scanf("%d", &key);
	}

  int canCount = key;

  struct Candidate *candidates = NULL;
  candidates = (struct Candidate *)malloc(key * sizeof(struct Candidate));
  if (candidates == NULL) {
    printf("Dynamic memory allocation did not succeed.");
    return 0;
  }

  for (int i = 0; i < canCount; i++) {
    printf("Give a name for candidate: ");
    scanf("%s", (candidates+i)->name);
    (candidates+i)->votes = 0;
  }

  int voterCount;
  printf("Number of voters: ");
  scanf("%i", &voterCount);

  char vote[10];
  for (int i = 0; i < voterCount; i++) {
    printf("Vote: ");
    scanf("%s", vote);
    if (voting(vote, canCount, candidates)) {
      printf("Invalid vote.\n");
    }
  }

  //prints the results
  for (int i = 0; i < canCount; i++) {
    printf("\nName: %s\nVotes: %i\n\n", (candidates+i)->name, (candidates+i)->votes);
  }

  printWinner(candidates, canCount);
  free(candidates);
  return 0;
}

int voting(char name[10], int canCount, struct Candidate *candidates) {
  //checks if the vote matches and adds a vote to the candidate
  for (int i = 0; i < canCount; i++) {
    if (strcmp((candidates+i)->name, name) == 0) {
      (candidates+i)->votes++;
      return 0;
    }
  }
  return 1;
}

void printWinner(struct Candidate *candidates, int canCount) {
  // checks who has the most votes and prints out the winner
  int maxVotes = 0;
  for (int i = 0; i < canCount; i++) {
    if ((candidates+i)->votes > maxVotes) {
      maxVotes = (candidates+i)->votes;
    }
  }
  for (int j = 0; j < canCount; j++) {
    if ((candidates+j)->votes == maxVotes) {
      printf("Winner is: %s\n", (candidates+j)->name);
    }
  }
}
