#include <stdio.h>

double calculateBagPrice(int num_bags);
double calculateTotalCost(double ticket_price, int num_bags, double tax, int class_choice);
void displayMenu();
void displayClassOptions();

int main(void) {
    int route_choice, num_bags, class_choice;
    double ticket_price, total_cost;
    const double TAX_RATE = 1.07;
    char choice;
    
    do {
        displayMenu();
        printf("Enter your flight choice: ");
        scanf("%d", &route_choice);

        switch (route_choice) {
            case 1:
                ticket_price = 250;
                break;
            case 2:
                ticket_price = 400;
                break;
            case 3:
                ticket_price = 550;
                break;
            default:
                printf("Invalid choice! Defaulting to MIA to BCN ($250).\n");
                ticket_price = 250;
        }
        
        displayClassOptions();
        printf("Enter your class choice: ");
        scanf("%d", &class_choice);
        
        printf("How many checked bags do you have?: ");
        scanf("%d", &num_bags);
        
        total_cost = calculateTotalCost(ticket_price, num_bags, TAX_RATE, class_choice);
        
        printf("The total cost (including tax) for this trip is: $%.2f\n", total_cost);
        
        printf("\nWould you like to calculate another trip? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you for using the flight cost estimator!\n");
    return 0;
}

double calculateBagPrice(int num_bags) {
    if (num_bags == 0) return 0;
    if (num_bags == 1) return 25;
    if (num_bags == 2) return 25 + 35;
    return 25 + 35 + (45 * (num_bags - 2));
}

double calculateTotalCost(double ticket_price, int num_bags, double tax, int class_choice) {
    double class_multiplier;
    switch (class_choice) {
        case 1:
            class_multiplier = 1.0; // Economy
            break;
        case 2:
            class_multiplier = 1.5; // Business
            break;
        case 3:
            class_multiplier = 2.5; // First Class
            break;
        default:
            printf("Invalid choice! Defaulting to Economy.\n");
            class_multiplier = 1.0;
    }
    double bag_price = calculateBagPrice(num_bags);
    return (ticket_price * class_multiplier + bag_price) * tax;
}

void displayMenu() {
    printf("\n--- Flight Cost Estimator ---\n");
    printf("1. MIA to BCN - $250\n");
    printf("2. NYC to LON - $400\n");
    printf("3. LAX to TYO - $550\n");
}

void displayClassOptions() {
    printf("\n--- Flight Class Options ---\n");
    printf("1. Economy (Base Price)\n");
    printf("2. Business (+50%% Price)\n");
    printf("3. First Class (+150%% Price)\n");
}
