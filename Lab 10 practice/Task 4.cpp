#include <stdio.h>
#include <string.h>

#define MAX_FLIGHTS 100
struct Flight {
    char flightNumber[10];
    char departureCity[50];
    char arrivalCity[50];
    char departureTime[10];
    char arrivalTime[10];
    int availableSeats;
};
void bookSeat(struct Flight flights[], int flightCount, char flightNumber[]) {
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
            if (flights[i].availableSeats > 0) {
                flights[i].availableSeats--;
                printf("Seat booked successfully on flight %s.\n", flights[i].flightNumber);
            } else {
                printf("No available seats on flight %s.\n", flights[i].flightNumber);
            }
            return;
        }
    }
    printf("Flight %s not found.\n", flightNumber);
}
void displayFlights(struct Flight flights[], int flightCount, char departureCity[], char arrivalCity[]) {
    int found = 0;
    printf("Available flights from %s to %s:\n", departureCity, arrivalCity);
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].departureCity, departureCity) == 0 && strcmp(flights[i].arrivalCity, arrivalCity) == 0) {
            printf("Flight Number: %s\n", flights[i].flightNumber);
            printf("Departure Time: %s\n", flights[i].departureTime);
            printf("Arrival Time: %s\n", flights[i].arrivalTime);
            printf("Available Seats: %d\n\n", flights[i].availableSeats);
            found = 1;
        }
    }
    if (!found) {
        printf("No flights available from %s to %s.\n", departureCity, arrivalCity);
    }
}
void updateFlight(struct Flight flights[], int flightCount, char flightNumber[]) {
    for (int i = 0; i < flightCount; i++) {
        if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
            printf("Updating details for flight %s:\n", flights[i].flightNumber);
            printf("Enter new departure city: ");
            scanf(" %[^\n]", flights[i].departureCity);
            printf("Enter new arrival city: ");
            scanf(" %[^\n]", flights[i].arrivalCity);
            printf("Enter new departure time: ");
            scanf(" %s", flights[i].departureTime);
            printf("Enter new arrival time: ");
            scanf(" %s", flights[i].arrivalTime);
            printf("Enter new available seats: ");
            scanf("%d", &flights[i].availableSeats);
            printf("Flight details updated successfully.\n");
            return;
        }
    }
    printf("Flight %s not found.\n", flightNumber);
}
int main() {
    struct Flight flights[MAX_FLIGHTS];
    int flightCount = 0;
    int choice;
    char searchDepartureCity[50];
    char searchArrivalCity[50];
    char flightNumber[10];
    while (1) {
        printf("\nFlight Booking System Menu:\n");
        printf("1. Add a new flight\n");
        printf("2. Book a seat on a flight\n");
        printf("3. Display available flights between two cities\n");
        printf("4. Update flight details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (flightCount >= MAX_FLIGHTS) {
                    printf("No more flights can be added.\n");
                } else {
                    printf("Enter flight number: ");
                    scanf(" %s", flights[flightCount].flightNumber);
                    printf("Enter departure city: ");
                    scanf(" %[^\n]", flights[flightCount].departureCity);
                    printf("Enter arrival city: ");
                    scanf(" %[^\n]", flights[flightCount].arrivalCity);
                    printf("Enter departure time: ");
                    scanf(" %s", flights[flightCount].departureTime);
                    printf("Enter arrival time: ");
                    scanf(" %s", flights[flightCount].arrivalTime);
                    printf("Enter available seats: ");
                    scanf("%d", &flights[flightCount].availableSeats);
                    flightCount++;
                    printf("Flight added successfully.\n");
                }
                break;
            case 2:
                printf("Enter flight number to book: ");
                scanf(" %s", flightNumber);
                bookSeat(flights, flightCount, flightNumber);
                break;
            case 3:
                printf("Enter departure city: ");
                scanf(" %[^\n]", searchDepartureCity);
                printf("Enter arrival city: ");
                scanf(" %[^\n]", searchArrivalCity);
                displayFlights(flights, flightCount, searchDepartureCity, searchArrivalCity);
                break;
            case 4:
                printf("Enter flight number to update: ");
                scanf(" %s", flightNumber);
                updateFlight(flights, flightCount, flightNumber);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
