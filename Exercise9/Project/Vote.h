/*
 * File:   		Vote.h
 * Author:    Veera Määttänen
 * Description: Prototypes for Vote.c
 */

#ifndef VOTE_H
#define VOTE_H

struct Candidate;
int votingSystem(void);
int voting(char name[10], int canCount, struct Candidate *candidates);
void printWinner(struct Candidate *candidate, int canCount);

#endif /* VOTE_H */
