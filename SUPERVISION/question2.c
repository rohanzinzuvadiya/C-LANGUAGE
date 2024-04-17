#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

// Define the Car structure
struct Car {
    int car_id;
    char car_company[50];
    char car_model[50];
    int car_year;
    char car_color[20];
    float car_price;
    int car_mileage;
};

int main() {
    int n;
    struct Car cars[MAX_CARS];

    // Ask the user for the number of cars
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    // Make sure the user doesn't enter more than MAX_CARS
    if (n > MAX_CARS) {
        printf("Maximum number of cars exceeded.\n");
        return 1;
    }

    // Get the car details from the user
    for (int i = 0; i < n; i++) {
        printf("\nEnter car %d details:\n", i+1);

        // Get the car ID
        printf("Car ID: ");
        scanf("%d", &cars[i].car_id);

        // Get the car make
        printf("Car company: ");
        scanf("%s", cars[i].car_company);

        // Get the car model
        printf("Car Model: ");
        scanf("%s", cars[i].car_model);

        // Get the car year
        printf("Car Year: ");
        scanf("%d", &cars[i].car_year);

        // Get the car color
        printf("Car Color: ");
        scanf("%s", cars[i].car_color);

        // Get the car price
        printf("Car Price: ");
        scanf("%f", &cars[i].car_price);

        // Get the car mileage
        printf("Car Mileage: ");
        scanf("%d", &cars[i].car_mileage);
    }

    // Print the car records
    printf("\nCar Records:\n");
    for (int i = 0; i < n; i++) {
        printf("\nCar %d:\n", i+1);

        // Print the car ID
        printf("Car ID: %d\n", cars[i].car_id);

        // Print the car make
        printf("Car Make: %s\n", cars[i].car_company);

        // Print the car model
        printf("Car Model: %s\n", cars[i].car_model);

        // Print the car year
        printf("Car Year: %d\n", cars[i].car_year);

        // Print the car color
        printf("Car Color: %s\n", cars[i].car_color);

        // Print the car price
        printf("Car Price: %.2f\n", cars[i].car_price);

        // Print the car mileage
        printf("Car Mileage: %d\n", cars[i].car_mileage);
    }

    return 0;
}