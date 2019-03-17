#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numberguess (void);

int main (){
  srand(time(NULL));
  /* runs the game */
  numberguess();

return 0;
}

 /* tells the machine how to drive the game through */
void numberguess(void){
  int x, guess, response;
  do{
    x = 1 + rand() % 1000;
    printf("\nI got a number between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please insert your guess. Faites votre jeux.\n");

    while (guess != x) {
      if(guess < x)
      printf("Too low. Please do try again.\n");
      else
      printf("Too high. Please do try again.\n");

      scanf("%d", &guess);
    }

    printf("\nExcellent! You guessed the right number!\n");
    printf("Would you like to play again!\n");
    printf("Please type (1 = Yes, 2 = No)\n");
    scanf("%d", &response);
  }
  while (response == 1);
}
