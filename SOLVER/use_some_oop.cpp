#include <iostream>
#include <cmath> // for pow() function

using namespace std;

class Utility {
public:
    // Calculation functions
    int add(int a, int b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero." << endl;
            return -1; // Indicate error
        }
        return a / b;
    }

    // Area finder functions
    double rectangleArea(double length, double width) {
        if (length <= 0 || width <= 0) {
            cout << "Error: Length and width must be positive." << endl;
            return -1; // Indicate error
        }
        return length * width;
    }

    double circleArea(double radius) {
        if (radius <= 0) {
            cout << "Error: Radius must be positive." << endl;
            return -1; // Indicate error
        }
        return M_PI * pow(radius, 2); // Use M_PI from cmath for pi
    }
    double Triangle(double Height , double breadth){
        if (Height <=0 || breadth <= 0) {
            cout << "Error: Height and breadth must be positive." << endl;
            return -1; // Indicate error
        }
        return 1/2 *Height * breadth; // Multiplying to find area
        
        
    }
    // Unit converter functions (simple example)
    double convertCelsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32;
    }

    double convertFahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5.0 / 9.0;
    }

    // Module finder function (exponential modulo)
    int expMod(int a, int b, int m) {
        int result = 1;
        a = mod(a, m); // Ensure a is within the modulo range

        while (b > 0) {
            if (b % 2 == 1) { // If b is odd, multiply by a
                result = (long long)result * a % m; // Use long long to handle potential overflow
            }
            b >>= 1; // Right shift b by 1 (equivalent to dividing by 2)
            a = (long long)a * a % m; // Square a and perform modulo m
        }

        return result;
    }

private:
    // Helper function for modulo operation (ensures positive b)
    int mod(int a, int b) {
        if (b <= 0) {
            cout << "Error: The second number (b) must be positive." << endl;
            return -1; // Indicate error
        }
        return a % b;
    }
};

int main() {
    Utility util;

    int choice;

    do {
        cout << "\nUtility Menu:" << endl;
        cout << "1. Calculation" << endl;
        cout << "2. Area Finder" << endl;
        cout << "3. Unit Converter" << endl;
        cout << "4. Module Finder (Exponential Mod)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int choice1;
                double num1, num2;
                cout << "\nCalculation Menu:" << endl;
                cout << "1. Addition" << endl;
                cout << "2. Subtraction" << endl;
                cout << "3. Multiplication" << endl;
                cout << "4. Division" << endl;
                cout << "Enter your choice: ";
                cin >> choice1;
                

                switch (choice1) {
                    case 1:
                        cout << "Enter two numbers to add: ";
                        cin >> num1 >> num2;
                        cout << num1 << " + " << num2 << " = " << util.add(num1, num2) << endl;
                        break;
                    case 2:
                        cout << "Enter two numbers (first - second): ";
                        cin >> num1 >> num2;
                        cout << num1 << " - " << num2 << " = " << util.subtract(num1, num2) << endl;
                        break;
                    case 3:
                        cout << "Enter two numbers to Multiply: ";
                        cin >> num1 >> num2;
                        cout << num1 << " * " << num2 << " = " << util.multiply(num1, num2) << endl;
                        break;
                    case 4:
                        cout << "Enter two numbers for Division: ";
                        cin >> num1 >> num2;
                        cout << num1 << " * " << num2 << " = " << util.divide(num1, num2) << endl;
                        break;
                    default:
                        cout <<"***||Invelid Responce||***" << endl;
                }
            }
                    
        }
    }while (choice = 5);
        {   
            cout << "" << endl;
            cout << "******||Thanks for using Me||******" << endl;
            exit;
        }
return 0;
}   
      

    
