/*
Exercise 6, task 4
Description: Printing a 2d array of ADC and celcius values.
Author:      Veera Määttänen
*/

#include <stdio.h>

int main() {

  float array[32][2] = {
    {250, 1.4}, {275, 4.0},
    {300, 6.4}, {325, 8.8},
    {350, 11.1}, {375, 13.4},
    {400, 15.6}, {425, 17.8},
    {450, 20.0}, {475, 22.2},
    {500, 24.4}, {525, 26.7},
    {550, 29.0}, {575, 31.3},
    {600, 33.7}, {625, 36.1},
    {650, 38.7}, {675, 41.3},
    {700, 44.1}, {725, 47.1},
    {750, 50.2}, {775, 53.7},
    {784, 55.0}, {825, 61.5},
    {850, 66.2}, {875, 71.5},
    {900, 77.9}, {925, 85.7},
    {937, 90.3}, {950, 96.0},
    {975, 111.2}, {1000, 139.5}
  };

  printf("ADC\t C\n");
  for (int i = 0; i < 32; i++) {
    printf("%.0f\t ", array[i][0]);
    printf("%.1f\n", array[i][1]);
  }

  return 0;
}
