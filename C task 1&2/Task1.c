#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Current floor is G floor at the beginning
  int current_floor = 0;

  // Keep looping until a condition that will use break to exit the loop
  while (1) {
    char destination;

    // Ask the user for a destination floor
    printf("Enter destination floor (G, 1, 2, 3, 4, 5): ");
    scanf(" %c", &destination);

    // Validation
    if (toupper(destination) != 'G' && !isdigit(destination)) {
      printf("Invalid input. Please enter a valid destination floor.\n");
      continue;
    }

    // Convert the destination floor to an integer
    int destination_floor;
    if (toupper(destination) == 'G') {
        destination_floor = 0;
    }else{
        destination_floor = destination - '0';
    }

    // Validating the floors so that program doesn't crash with wrong input
    if (destination_floor < 0 || destination_floor > 5) {
      printf("Invalid input. Please enter a valid destination floor.\n");
      continue;
    }

    // Choosing the direction
    int direction;
    if (destination_floor > current_floor) {
        direction = 1;
    }else{
        direction = -1;
    }


    // Calculating the direction
    while (current_floor != destination_floor) {
      current_floor += direction;
      printf("Floor: %d\n", current_floor);
    }

    // Asking the user if they wish to alight
    char alight;
    printf("Do you want to alight at floor %d? (Y/N) ", current_floor);
    scanf(" %c", &alight);

    // Validation
    if (toupper(alight) != 'Y' && toupper(alight) != 'N') {
      printf("Invalid input. Please enter Y or N.\n");
      continue;
    }

    // If the user alights break the loop
    if (toupper(alight) == 'Y') {
      break;
    }
  }
  return 0;
}
