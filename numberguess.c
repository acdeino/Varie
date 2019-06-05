#include <stdio.h>


int main (void) {
  int first_guess, second_guess, third_guess, fourth_guess, fifth_guess, nth_guess;
  printf("I have a number between 1 and 1000\n");
  printf("Can you guess which one?\n");
  printf("\n");
  printf("\n");
  printf("Please insert here your first guess:");
  printf("\n");
  scanf("%i\n", first_guess);

  if (first_guess == 437) {
    printf("Excellent! You got it at the very first guess!:\n");

    else if (first_guess <= 436) {
      printf("Too low, try again. Please have another guess:\n");

      else (first_guess >= 438) {
        printf("Too high, try again. Please insert another guess:\n");
      }
    }
  }



return 0;
}
