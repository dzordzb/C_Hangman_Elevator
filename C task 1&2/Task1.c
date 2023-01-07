#include <stdio.h>
/*

int main(void) {
  // Initialize the current floor to the ground floor
  int current_floor = 0;

  // Keep looping until the user exits the program
  while (1) {
    char destination;

    // Prompt the user for their destination floor
    printf("Enter destination floor (G, 1, 2, 3, 4, 5): ");
    scanf(" %c", &destination);

    // Validate the input
    if (toupper(destination) != 'G' && !isdigit(destination)) {
      printf("Invalid input. Please enter a valid destination floor.\n");
      continue;
    }

    // Convert the destination floor to an integer
    int destination_floor = toupper(destination) == 'G' ? 0 : destination - '0';

    // Validate the destination floor
    if (destination_floor < 0 || destination_floor > 5) {
      printf("Invalid input. Please enter a valid destination floor.\n");
      continue;
    }

    // Calculate the direction of travel
    int direction = destination_floor > current_floor ? 1 : -1;

    // Travel to the destination floor
    while (current_floor != destination_floor) {
      current_floor += direction;
      printf("Floor: %d\n", current_floor);
    }

    // Ask the user if they want to alight
    char alight;
    printf("Do you want to alight at floor %d? (Y/N) ", current_floor);
    scanf(" %c", &alight);

    // Validate the input
    if (toupper(alight) != 'Y' && toupper(alight) != 'N') {
      printf("Invalid input. Please enter Y or N.\n");
      continue;
    }

    // If the user wants to alight, exit the loop
    if (toupper(alight) == 'Y') {
      break;
    }
  }

  return 0;
}



#include <stdio.h>
#include <ctype.h>

#define MAX_PASSENGERS 10

int main(void) {
// Initialize the current floor to the ground floor
int current_floor = 0;

// Create an array to store the destination floors of all passengers
int destination_floors[MAX_PASSENGERS];

// Initialize the array to all zeros
for (int i = 0; i < MAX_PASSENGERS; i++) {
    destination_floors[i] = 0;
}

// Keep looping until the user exits the program
int i = 0;
while (1) {
char destination;

// Prompt the user for their destination floor
printf("Enter destination floor for passenger %d (G, 1, 2, 3, 4, 5): ", i + 1);
scanf(" %c", &destination);

// Convert the destination floor to an integer

int destination_floor;
    if (toupper(destination) == 'G') {
        destination_floor = 0;
    }else{
        destination_floor = destination - '0';
    }
// Validate the destination floor
    if (destination_floor < 0 || destination_floor > 5) {
      printf("Invalid input. Please enter a valid destination floor.\n");
      continue;
    }

// Store the destination floor in the array
    destination_floors[i] = destination_floor;
    i++;

// Ask the user if they want to enter more passengers
    char more_passengers;
    printf("Do you want to enter more passengers? (Y/N) ");
    scanf(" %c", &more_passengers);

// Validate the input
    if (toupper(more_passengers) != 'Y' && toupper(more_passengers) != 'N') {
        printf("Invalid input. Please enter Y or N.\n");
        continue;
    }

// If the user doesn't want to enter more passengers, exit the loop
    if (toupper(more_passengers) == 'N') {
        break;
    }
}

// Travel to the destination floors of all passengers
int direction = 0;
for (int i = 0; i < MAX_PASSENGERS; i++) {
    // Calculate the direction of travel

    if (destination_floors[i] > current_floor) {
      direction = 1;
    } else {
      direction = -1;
    }


    while (current_floor != destination_floors[i]) {
      current_floor += direction;
      printf("Floor: %d\n", current_floor);
          if (current_floor == destination_floors[i]) {
                break;
          }
    }
    printf("Passenger %d alighted at floor %d.\n", i + 1, current_floor);
}

return 0;
}

#include <stdio.h>
#include <ctype.h>

#define MAX_PASSENGERS 10

int main(void) {
// Initialize the current floor to the ground floor
int current_floor = 0;
//int MAX_PASSENGERS = 10;
// Create an array to store the destination floors of all passengers
int destination_floors[MAX_PASSENGERS];

// Initialize the array to all zeros
for (int i = 0; i < MAX_PASSENGERS; i++) {
    destination_floors[i] = 0;
}

// Keep looping until the user exits the program
int i = 0;
while (1) {
char destination;

// Prompt the user for their destination floor
printf("Enter destination floor for passenger %d (G, 1, 2, 3, 4, 5): ", i + 1);
scanf(" %c", &destination);

// Convert the destination floor to an integer

int destination_floor;
    if (toupper(destination) == 'G') {
        destination_floor = 0;
    }else{
        destination_floor = destination - '0';
    }
// Validate the destination floor
    if (destination_floor < 0 || destination_floor > 5) {
      printf("Invalid input. Please enter a valid destination floor.\n");
      continue;
    }

// Store the destination floor in the array
    destination_floors[i] = destination_floor;
    i++;

// Ask the user if they want to enter more passengers
    char more_passengers;
    printf("Do you want to enter more passengers? (Y/N) ");
    scanf(" %c", &more_passengers);

// Validate the input
    if (toupper(more_passengers) != 'Y' && toupper(more_passengers) != 'N') {
        printf("Invalid input. Please enter Y or N.\n");
        continue;
    }

// If the user doesn't want to enter more passengers, exit the loop
    if (toupper(more_passengers) == 'N') {
        break;
    }
}

// Travel to the destination floors of all passengers
int direction = 0;
for (int i = 0; i < MAX_PASSENGERS; i++) {
    // If the current destination floor is 0, it means that there are no more passengers to pick up or drop off
    if (destination_floors[i] == 0) {
        break;
    }

    // Calculate the direction of travel
    if (destination_floors[i] > current_floor) {
      direction = 1;
    } else {
      direction = -1;
    }

    while (current_floor != destination_floors[i]) {
      current_floor += direction;
      printf("Floor: %d\n", current_floor);
          if (current_floor == destination_floors[i]) {
                break;
          }
    }
    printf("Passenger %d alighted at floor %d.\n", i + 1, current_floor);
}

return 0;
}


#include <stdio.h>
#include <ctype.h>

#define MAX_PASSENGERS 10

int main(void) {
  // Initialize the current floor to the ground floor
  int current_floor = 0;

  // Create an array to store the destination floors of all passengers
  int destination_floors[MAX_PASSENGERS];

  // Initialize the array to all zeros
  for (int i = 0; i < MAX_PASSENGERS; i++) {
    destination_floors[i] = 0;
  }

  // Keep looping until the user exits the program
  int i = 0;
  while (1) {
    char destination;

    // Prompt the user for their destination floor
    printf("Enter destination floor for passenger %d (G, 1, 2, 3, 4, 5): ", i + 1);
    scanf(" %c", &destination);

    // Convert the destination floor to an integer
    int destination_floor;
    if (toupper(destination) == 'G') {
      destination_floor = 0;
    } else {
      destination_floor = destination - '0';
    }

    // Validate the destination floor
    if (destination_floor < 0 || destination_floor > 5) {
      printf("Invalid input. Please enter a valid destination floor.\n");
      continue;
    }

    // Store the destination floor in the array
    destination_floors[i] = destination_floor;
    i++;

    // Ask the user if they want to enter more passengers
    char more_passengers;
    printf("Do you want to enter more passengers? (Y/N) ");
    scanf(" %c", &more_passengers);

    // Validate the input
    if (toupper(more_passengers) != 'Y' && toupper(more_passengers) != 'N') {
      printf("Invalid input. Please enter Y or N.\n");
      continue;
    }

    // If the user doesn't want to enter more passengers, exit the loop
    if (toupper(more_passengers) == 'N') {
      break;
    }
  }

// Travel to the destination floors of all passengers
int direction = 0;
for (int i = MAX_PASSENGERS - 1; i >= 0; i--) {
    // If the current destination floor is 0, it means that there are no more passengers to pick up or drop off
    if (destination_floors[i] == 0) {
        continue;
    }

    // Calculate the direction of travel
    if (destination_floors[i] > current_floor) {
        direction = 1;
    } else {
        direction = -1;
    }

    while (current_floor != destination_floors[i]) {
        current_floor += direction;
        printf("Floor: %d\n", current_floor);
        if (current_floor == destination_floors[i]) {
            break;
        }
    }
    printf("Passenger %d alighted at floor %d.\n", i + 1, current_floor);
}


  return 0;
}
*/
#include <stdio.h>
#include <ctype.h>

#define MAX_PASSENGERS 10


//some basic sorting that works that I found on the internet
void sortDescending(int *ptr, int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) > *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}


void sortAscending(int *ptr, int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}




int main(void) {
    int current_floor = 0;
    char answer;
    int hasNewFloors;

    int destination_floors[MAX_PASSENGERS];
    int destinationFloorsSize = 0;

    int tmp_destination_floors[MAX_PASSENGERS];
    int tmpDestinationFloorsSize = 0;



    for (int i = 0; i < MAX_PASSENGERS; i++) {
    destination_floors[i] = 0;
    tmp_destination_floors[i] = 0;
    }

  // The main loop that works while there are any passengers left in the elevator. The ones that enter later also count
    int i = 0;
    while (i < MAX_PASSENGERS) {
        char destination;

        // prompting for the destination floor for the first time
        printf("Enter destination floor for passenger %d (G, 1, 2, 3, 4, 5): ", i + 1);
        scanf(" %c", &destination);
        destinationFloorsSize++;

        // Just so you can go to G floor
        int destination_floor;
        if (toupper(destination) == 'G') {
          destination_floor = 0;
        } else {
          destination_floor = destination - '0';
        }

        // So that the user mistake won't crash the code, but just continue the loop
        if (destination_floor < 0 || destination_floor > 5) {
            printf("Invalid input. Please enter a valid destination floor.\n");
            continue;
        }

        // Storing the destination floor in the array
        destination_floors[i] = destination_floor;
        i++;

        // Asking if more passengers want to enter
        char more_passengers;
        printf("Do you want to enter more passengers? (Y/N) ");
        scanf(" %c", &more_passengers);

        // Validatation
        if (toupper(more_passengers) != 'Y' && toupper(more_passengers) != 'N') {
          printf("Invalid input. Please enter Y or N.\n");
          continue;
        }
        // Exiting the main loop when all the passenger have boarded on the G floor
        if (toupper(more_passengers) == 'N') {
          break;
        }
    }

    int direction = 0;

    sortAscending(destination_floors, destinationFloorsSize);//sorting the array before any work

    int elevatorIsInMotion = 1;

    while(elevatorIsInMotion == 1){
        // Choosing the direction
        if (destination_floors[0] > current_floor) {
            direction = 1;
        }
        else {
            direction = -1;
        }

        while (current_floor != destination_floors[0]) {
            current_floor += direction;
            printf("Floor: %d\n", current_floor);
            if (current_floor == destination_floors[0]) {
                break;
            }
        }

        //When while finishes we have arrived at a floor and someone is meant to alight
        printf("Passenger alighted at floor %d.\n", current_floor);

        //removing the first floor from the array
        for (i = 0; i < destinationFloorsSize -1; i++){
            destination_floors[i] = destination_floors[i+1];
        }
        destinationFloorsSize--;

        //adding a 0 to the end of the array so we know when we passed all the floors
        destination_floors[destinationFloorsSize + 1] = 0;

        //adding if anybody new is entering
        printf("Is anyone new entering the elevator?");
        scanf(" %c", &answer);

        while (answer == 'Y' || answer == 'y'){
            int newFloor;
            printf("Which floor is the new person going to? ");
            scanf(" %d", &newFloor);
            //adding new floors into a new array for later sorting
            tmp_destination_floors[tmpDestinationFloorsSize + 1] = newFloor;
            tmpDestinationFloorsSize++;
            hasNewFloors = 1;
            printf("Is anyone new entering the elevator? ");
            scanf(" %c", &answer);
        }


        printf("BROJ PREOSTALIH SPRATOVA: %d \n", destinationFloorsSize);
        printf("IMA NOVE SPRATOVE %d \n", hasNewFloors);

        if (hasNewFloors == 1 && destinationFloorsSize == 0){

            printf("GOTOVI SA TRENUTNIM SPRATOVIMA, DODAJEMO NOVE, IMA IH %d \n", tmpDestinationFloorsSize);

            //copying new floors to the array

            for(int m = 0; m < 10; m++){
                destination_floors[m] = tmp_destination_floors[m+1];
            }
            destinationFloorsSize = tmpDestinationFloorsSize;

            //if the elevator goes up, we sort descending, and vice versa
            if (direction == 1){
                sortDescending(destination_floors, destinationFloorsSize);
            }
            else if (direction == -1){
                sortAscending(destination_floors, destinationFloorsSize);
            }

            //resetting the array with new floors
            tmpDestinationFloorsSize = 0;
            for(int r = 0; r < 10; r++){
                tmp_destination_floors[r] = 0;
            }
            hasNewFloors = 0;

            printf("\n BROJ PREOSTALIH SPRATOVA: %d \n", destinationFloorsSize);

        }
        else if (destinationFloorsSize <= 0 && hasNewFloors == 0){
            printf("No more people, elevator musics stops");
            return 0;
        }
    }
  return 0;
}


