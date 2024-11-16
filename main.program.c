#include <stdio.h>
#include <string.h>

int main(void){
  int option = 4, rooms[6], count = -1;
  rooms[0] = (100);
  rooms[1] = (100);
  rooms[2] = (85);
  rooms[3] = (75);
  rooms[4] = (75);
  rooms[5] = (50);
  while(option == 4) {
      printf("What would you like to do?\nCheck in (1)\nBook a table (2)\nCheck out (3)\nQuit (4)\nAnswer:");
      fflush(stdin);
      scanf("%d", &option);
      switch(option) {
          case 1:
              count = count + 1;
          printf("Check in!\n");
          int dob, adults[6], children[6], staylength[6], choice[6];
          char name1[10], name2[10], type[6], paper[6];
          printf("Enter your first name:");
          fflush(stdin);
          gets(name1);#include <stdio.h>
#include <string.h>

int main(void){
  int option = 4, rooms[6], count = -1;
  rooms[0] = (100);
  rooms[1] = (100);
  rooms[2] = (85);
  rooms[3] = (75);
  rooms[4] = (75);
  rooms[5] = (50);
  while(option == 4) {
      printf("What would you like to do?\nCheck in (1)\nBook a table (2)\nCheck out (3)\nQuit (4)\nAnswer:");
      fflush(stdin);
      scanf("%d", &option);
      switch(option) {
          case 1:
              count = count + 1;
          printf("Check in!\n");
          int dob, adults[6], children[6], staylength[6], choice[6];
          char name1[10], name2[10], type[6], paper[6];
          printf("Enter your first name:");
          fflush(stdin);
          gets(name1);
          printf("Enter your last name:");
          fflush(stdin);
          gets(name2);
          printf("Enter your date of birth (ddmmyy):");
          fflush(stdin);
          scanf("%d", &dob);
          printf("How many adults are there? (17 or above):");
          fflush(stdin);
          scanf("%d", &adults[count]);
          printf("How many children are there? (16 or below):");
          fflush(stdin);
          scanf("%d", &children[count]);
          printf("Are you looking to get Full Board, Half Board, or Bed and Breakfast? (F, H, or B):");
          fflush(stdin);
          scanf("%c", &type[count]);
          printf("How long are you staying? (days):");
          fflush(stdin);
          scanf("%d", &staylength[count]);
          printf("Would you like to recieve a paper? (Y/N):");
          fflush(stdin);
          scanf("%c", &paper[count]);

          printf("\n");
          for(int i = 0; i < 6; i++){
              printf("Room %d costs %d:\n", i+1, rooms[i]);
          }
          printf("\nA cost of 0 means this rooms is fully booked\nWhich rooms would you like to book? (1-6):");
          fflush(stdin);
          scanf("%d", &choice[count]);
          if(rooms[choice[count]-1] == 0) {
              printf("This is booked!");
          }
          rooms[choice[count]-1] = 0;

          strncat(name1, "3", 1);
          strncat(name1, "4", 1);
          strncat(name1, "8", 1);
          printf("Your ID is: ");
          puts(name1);
          printf("\n");
          option = 4;
          break;
          case 2:
              printf("Book a table!\n");
          int tables7[3], tables9[3], people, time;
          printf("How many people are there?:");
          fflush(stdin);
          scanf("%d", &people);
          if(people>4 || people<1) {
              printf("Too many people, sorry we can't book for you.");
          }
          else {
              printf("What time would you like to book for? (7 or 9)");
              fflush(stdin);
              scanf("%d", &time);
              if( time == 7) {
                  printf("");
              }
              else if (time == 9) {
                  printf("");
              }
              else {
                  printf("Invalid time\n");
              }
              break;
              case 3:
                  printf("Check out!\n");
              break;
              case 4:
                  printf("Restarting...\n");
              break;
              default:
                  printf("Invalid option, restarting...\n");
              option = 4;
              break;
          }
      }
  }
  return 0;
  }

          printf("Enter your last name:");
          fflush(stdin);
          gets(name2);
          printf("Enter your date of birth (ddmmyy):");
          fflush(stdin);
          scanf("%d", &dob);
          printf("How many adults are there? (17 or above):");
          fflush(stdin);
          scanf("%d", &adults[count]);
          printf("How many children are there? (16 or below):");
          fflush(stdin);
          scanf("%d", &children[count]);
          printf("Are you looking to get Full Board, Half Board, or Bed and Breakfast? (F, H, or B):");
          fflush(stdin);
          scanf("%c", &type[count]);
          printf("How long are you staying? (days):");
          fflush(stdin);
          scanf("%d", &staylength[count]);
          printf("Would you like to recieve a paper? (Y/N):");
          fflush(stdin);
          scanf("%c", &paper[count]);

          printf("\n");
          for(int i = 0; i < 6; i++){
              printf("Room %d costs %d:\n", i+1, rooms[i]);
          }
          printf("\nA cost of 0 means this rooms is fully booked\nWhich rooms would you like to book? (1-6):");
          fflush(stdin);
          scanf("%d", &choice[count]);
          if(rooms[choice[count]-1] == 0) {
              printf("This is booked!");
          }
          rooms[choice[count]-1] = 0;

          strncat(name1, "3", 1);
          strncat(name1, "4", 1);
          strncat(name1, "8", 1);
          printf("Your ID is: ");
          puts(name1);
          printf("\n");
          option = 4;
          break;
          case 2:
              printf("Book a table!\n");
          int tables7[3], tables9[3], people, time;
          printf("How many people are there?:");
          fflush(stdin);
          scanf("%d", &people);
          if(people>4 || people<1) {
              printf("Too many people, sorry we can't book for you.");
          }
          else {
              printf("What time would you like to book for? (7 or 9)");
              fflush(stdin);
              scanf("%d", &time);
              if( time == 7) {
                  printf("");
              }
              else if (time == 9) {
                  printf("");
              }
              else {
                  printf("Invalid time\n");
              }
              break;
              case 3:
                  printf("Check out!\n");
              break;
              case 4:
                  printf("Restarting...\n");
              break;
              default:
                  printf("Invalid option, restarting...\n");
              option = 4;
              break;
          }
      }
  }
  return 0;
  }
