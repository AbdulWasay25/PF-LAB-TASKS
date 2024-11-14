#include <stdio.h>
#include <string.h>

#define MAX 5
struct travelpackage{
    char name[50];
    char destination[50];
    int duration;  
    double cost;   
    int seats;
};

// Function to display available travel packages
void displaypackages(struct travelpackage packages[], int n) {
    printf("Available Travel Packages:\n");
    for (int i = 0; i < n; i++) {
        printf("Package %d: %s\n", i + 1, packages[i].name);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: Rs%.2f\n", packages[i].cost);
        printf("Seats Available: %d\n", packages[i].seats);
        printf("\n");
    }
}
void bookpackage(struct travelpackage packages[], int n) {
    int choice;
    printf("Enter the Package Number you want to book: ");
    scanf("%d", &choice);
    if (choice > 0 && choice <= n) {
        if (packages[choice - 1].seats > 0) {
            packages[choice - 1].seats--;
            printf("Successfully booked package: %s\n", packages[choice - 1].name);
        } else {
            printf("All Seats Are Booked For This Package.\n");
        }
    } else {
        printf("Invalid choice. \n");
    }
}

int main() {
    struct travelpackage packages[MAX] = {
        {"Gold Package", "Toronto", 10, 1500.0, 5},
        {"Diamond Package", "Barcelona", 7, 2000.0, 3},
        {"Exclusive Package", "Maldives", 14, 3000.0, 2},
        {"Premium Package", "Makkah", 5, 2500.0, 4},
        {"Platinium Package", "Madinah", 4, 1000.0, 6}
    };
    char choice;
    while (1) {
        printf("Press V to View Available Packages , B for Booking , 0 to Exit ");
        scanf("%c", &choice);

        switch (choice) {
            case 'V':
                displaypackages(packages, MAX);
                break;
            case 'B':
                bookpackage(packages, MAX);
                break;
            case '0':
			    printf("\n------PROGRAM EXIT SUCESSFULL------");
			    return 0;    break;}
        }
    return 0;
}
