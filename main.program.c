#include <stdio.h>

int main(void){
  int quit = 1;
  while(quit == 1) {
    printf("Hello world! \n");



    int loop = 1;
    while(loop == 1){
      char ans;
      printf("Do you want to go back to menu? Y/N:");
      fflush(stdin);
      scanf("%c",&ans);
      if(ans == 'y' || ans == 'Y'){
        quit = 1;
        loop = 0;
      }
      else if(ans == 'n' || ans == 'N'){
        quit = 0;
        loop = 0;
      }
      else{
        printf("Wrong input. Try again.\n");
        loop = 1;
      }
    }
  }
  return 0;
  }
