#include <iostream>
#include <iomanip>

using namespace std;

// Function to display product choices
void displayProductChoices() {
    cout << "Product Choices:" << endl;
    cout << "1. Iphone 14 1TB Fully Paid Cash - $10.00 per unit" << endl;
    cout << "2. Ipad Foldable - $20.00 per unit" << endl;
    cout << "3. Vbucks - $30.00 per unit" << endl;
}

int main() {
    // User details
    string userName;
    cout << "Enter your name: ";
    getline(cin, userName);

    // Product details
    int productChoice;
    int quantity;

    // Display product choices
    displayProductChoices();

    // Get user input for product choice
    cout << "Enter the product number (1-3): ";
    cin >> productChoice;

    // Validate product choice
    if (productChoice < 1 || productChoice > 3) {
        cout << "Invalid product choice. Exiting program." << endl;
        return 1;
    }

    // Get user input for quantity
    cout << "Enter the quantity: ";
    cin >> quantity;

    // Validate quantity
    if (quantity <= 0) {
        cout << "Invalid quantity. Exiting program." << endl;
        return 1;
    }

    // Computation of total price
    double pricePerUnit;
    switch (productChoice) {
        case 1:
            pricePerUnit = 10.0;
            break;
        case 2:
            pricePerUnit = 20.0;
            break;
        case 3:
            pricePerUnit = 30.0;
            break;
    }

    double totalPrice = pricePerUnit * quantity;

    // Display total price
    cout << fixed << setprecision(2);
    cout << "Total Price: $" << totalPrice << endl;

    // Payment system
    cout << "Payment options:" << endl;
    cout << "1. Credit Card" << endl;
    cout << "2. PayPal" << endl;
    cout << "3. Cash on Delivery" << endl;

    int paymentChoice;
    cout << "Enter the payment option (1-3): ";
    cin >> paymentChoice;

    // Display receipt
    cout << "\nReceipt:" << endl;
    cout << "Customer: " << userName << endl;
    cout << "Product: ";
    switch (productChoice) {
        case 1:
            cout << "Iclong 14 1TB";
            break;
        case 2:
            cout << "Ipad Foldable";
            break;
        case 3:
            cout << "Vbucks";
            break;
    }
    cout << "\nQuantity: " << quantity << " units" << endl;
    cout << "Total Price: $" << totalPrice << endl;
    cout << "Payment Method: ";
    switch (paymentChoice) {
        case 1:
            cout << "Credit Card";
            break;
        case 2:
            cout << "PayPal";
            break;
        case 3:
            cout << "Cash on Delivery";
            break;
    }

    return 0;
}
