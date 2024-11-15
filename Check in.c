#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

  int age, adults, children, staylength, rooms[6], choice;
  rooms[0] = (100);
  rooms[1] = (100);
  rooms[2] = (85);
  rooms[3] = (75);
  rooms[4] = (75);
  rooms[5] = (50);
  char name1[10], name2[10], type, paper, id[15];
  printf("Enter your first name:");
  gets(name1);
  printf("Enter your last name:");
  fflush(stdin);
  gets(name2);
  printf("Enter your age:");
  fflush(stdin);
  scanf("%d", &age);
  printf("How many adults are there? (17 or above):");
  fflush(stdin);
  scanf("%d", &adults);
  printf("How many children are there? (16 or below):");
  fflush(stdin);
  scanf("%d", &children);
  printf("Are you looking to get Full Board, Half Board, or Bed and Breakfast? (F, H, or B):");
  fflush(stdin);
  scanf("%c", &type);
  printf("How long are you staying? (days):");
  fflush(stdin);
  scanf("%d", &staylength);
  printf("Would you like to recieve a paper? (Y/N):");
  fflush(stdin);
  scanf("%c", &paper);

  for(int i = 0; i < 6; i++){
    printf("Room %d costs %d:\n", i+1, rooms[i]);
  }
  printf("A cost of 0 means this rooms is fully booked\nWhich rooms would you like to book? (1-6):");
  fflush(stdin);
  scanf("%d", &choice);

  rooms[choice-1] = 0;

  strncat(name1, "3", 1);
  strncat(name1, "4", 1);
  strncat(name1, "8", 1);
  printf("Your ID is: ");
  puts(name1);

  return 0;
}