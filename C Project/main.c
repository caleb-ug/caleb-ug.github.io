#include <stdio.h>

// Function declarations for categories
void burgersMenu();
void juicesMenu();
void mojitosMenu();
void milkshakesMenu();
void appetizersMenu();

int main() {
    int choice;

    while (1) { // Loop to keep showing the menu until the user exits
        printf("\n**********************************************\n");
        printf("*         Welcome to Caleb's Kitchen!       *\n");
        printf("*------------------------------------------*\n");
        printf("*         Please choose a category:        *\n");
        printf("* 1. Burgers                               *\n");
        printf("* 2. Juices                                *\n");
        printf("* 3. Mojitos                               *\n");
        printf("* 4. Milkshakes                            *\n");
        printf("* 5. Appetizers                            *\n");
        printf("* 6. Exit                                   *\n");
        printf("**********************************************\n");

        if (scanf("%d", &choice) != 1) { // Check if the input is valid
            printf("Invalid input. Exiting...\n");
            break;
        }

        switch (choice) {
            case 1:
                burgersMenu();
                break;
            case 2:
                juicesMenu();
                break;
            case 3:
                mojitosMenu();
                break;
            case 4:
                milkshakesMenu();
                break;
            case 5:
                appetizersMenu();
                break;
            case 6:
                printf("Thank you for visiting Caleb's Kitchen!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

// Function to handle Burgers menu
void burgersMenu() {
    int choice, quantity;
    float total = 0;
    float prices[] = {10000.00, 10000.00, 15000.00, 15000.00, 15000.00, 10000.00}; // Prices for the burgers in UGX

    printf("\n--- Burgers Menu ---\n");
    printf("1. Classic Chicken Burger - UGX 10,000\n");
    printf("2. Classic Beef Burger - UGX 10,000\n");
    printf("3. Triple Cheese Chicken Burger - UGX 15,000\n");
    printf("4. Triple Cheese Beef Burger - UGX 15,000\n");
    printf("5. Fried Chicken Burger - UGX 15,000\n");
    printf("6. Beef Deluxe Burger - UGX 10,000\n");
    printf("7. Go Back\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Returning to main menu...\n");
        while (getchar() != '\n'); // Clear invalid input
        return;
    }

    if (choice >= 1 && choice <= 6) {
        printf("Enter quantity: ");
        if (scanf("%d", &quantity) != 1 || quantity <= 0) { // Validate quantity input
            printf("Invalid quantity. Returning to main menu...\n");
            while (getchar() != '\n'); // Clear invalid input
            return;
        }
        total = prices[choice - 1] * quantity;
        printf("You ordered %d item(s). Total: UGX %.2f\n", quantity, total);
    } else if (choice == 7) {
        printf("Returning to main menu...\n");
    } else {
        printf("Invalid choice. Returning to main menu...\n");
    }
}

// Function to handle Juices menu
void juicesMenu() {
    int choice, quantity;
    float total = 0;
    float prices[] = {10000, 5000, 3000, 5000, 10000}; // Prices for the juices in UGX

    printf("\n--- Juices Menu ---\n");
    printf("1. Mango Juice - UGX 10,000\n");
    printf("2. Passion Fruit Juice - UGX 5,000\n");
    printf("3. Watermelon Juice - UGX 3,000\n");
    printf("4. Cocktail Juice - UGX 5,000\n");
    printf("5. Lemon Mint Juice - UGX 10,000\n");
    printf("6. Go Back\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Returning to main menu...\n");
        while (getchar() != '\n'); // Clear invalid input
        return;
    }

    if (choice >= 1 && choice <= 5) {
        printf("Enter quantity: ");
        if (scanf("%d", &quantity) != 1 || quantity <= 0) { // Validate quantity input
            printf("Invalid quantity. Returning to main menu...\n");
            while (getchar() != '\n'); // Clear invalid input
            return;
        }
        total = prices[choice - 1] * quantity;
        printf("You ordered %d item(s). Total: UGX %.2f\n", quantity, total);
    } else if (choice == 6) {
        printf("Returning to main menu...\n");
    } else {
        printf("Invalid choice. Returning to main menu...\n");
    }
}

// Function to handle Mojitos menu
void mojitosMenu() {
    int choice, quantity;
    float total = 0;
    float prices[] = {10000, 10000, 5000, 10000}; // Prices for mojitos in UGX

    printf("\n--- Mojitos Menu ---\n");
    printf("1. Strawberry Mojito - UGX 10,000\n");
    printf("2. Passion Fruit Mojito - UGX 10,000\n");
    printf("3. Classic Mojito - UGX 5,000\n");
    printf("4. Blueberry Mojito - UGX 10,000\n");
    printf("5. Go Back\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Returning to main menu...\n");
        while (getchar() != '\n'); // Clear invalid input
        return;
    }

    if (choice >= 1 && choice <= 4) {
        printf("Enter quantity: ");
        if (scanf("%d", &quantity) != 1 || quantity <= 0) { // Validate quantity input
            printf("Invalid quantity. Returning to main menu...\n");
            while (getchar() != '\n'); // Clear invalid input
            return;
        }
        total = prices[choice - 1] * quantity;
        printf("You ordered %d item(s). Total: UGX %.2f\n", quantity, total);
    } else if (choice == 5) {
        printf("Returning to main menu...\n");
    } else {
        printf("Invalid choice. Returning to main menu...\n");
    }
}

// Function to handle Milkshakes menu
void milkshakesMenu() {
    int choice, quantity;
    float total = 0;
    float prices[] = {10000, 10000, 20000, 10000, 5000}; // Prices for milkshakes in UGX

    printf("\n--- Milkshakes Menu ---\n");
    printf("1. Strawberry Milkshake - UGX 10,000\n");
    printf("2. Pistachio Milkshake - UGX 10,000\n");
    printf("3. Oreo Chocolate Milkshake - UGX 20,000\n");
    printf("4. Banana Milkshake - UGX 10,000\n");
    printf("5. Avocado Milkshake - UGX 5,000\n");
    printf("6. Go Back\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Returning to main menu...\n");
        while (getchar() != '\n'); // Clear invalid input
        return;
    }

    if (choice >= 1 && choice <= 5) {
        printf("Enter quantity: ");
        if (scanf("%d", &quantity) != 1 || quantity <= 0) { // Validate quantity input
            printf("Invalid quantity. Returning to main menu...\n");
            while (getchar() != '\n'); // Clear invalid input
            return;
        }
        total = prices[choice - 1] * quantity;
        printf("You ordered %d item(s). Total: UGX %.2f\n", quantity, total);
    } else if (choice == 6) {
        printf("Returning to main menu...\n");
    } else {
        printf("Invalid choice. Returning to main menu...\n");
    }
}

// Function to handle Appetizers menu
void appetizersMenu() {
    int choice, quantity;
    float total = 0;
    float prices[] = {5000, 1500, 4000, 3000, 5000, 2000}; // Prices for appetizers in UGX

    printf("\n--- Appetizers Menu ---\n");
    printf("1. Mozzarella Sticks - UGX 5,000\n");
    printf("2. Volcano Fries - UGX 1,500\n");
    printf("3. Dynamite Shrimp - UGX 4,000\n");
    printf("4. Dynamite Chicken - UGX 3,000\n");
    printf("5. Volcano Chicken - UGX 5,000\n");
    printf("6. Fried Onion Rings - UGX 2,000\n");
    printf("7. Go Back\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Returning to main menu...\n");
        while (getchar() != '\n'); // Clear invalid input
        return;
    }

    if (choice >= 1 && choice <= 6) {
        printf("Enter quantity: ");
        if (scanf("%d", &quantity) != 1 || quantity <= 0) { // Validate quantity input
            printf("Invalid quantity. Returning to main menu...\n");
            while (getchar() != '\n'); // Clear invalid input
            return;
        }
        total = prices[choice - 1] * quantity;
        printf("You ordered %d item(s). Total: UGX %.2f\n", quantity, total);
    } else if (choice == 7) {
        printf("Returning to main menu...\n");
    } else {
        printf("Invalid choice. Returning to main menu...\n");
    }
}
