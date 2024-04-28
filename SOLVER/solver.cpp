#include <iostream>
#include <cmath> // for pow() function

using namespace std;

class Utility {

public:
    // Calculation functions
    double add(int a, int b) {
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

    double Triangle(double Height, double breadth) {
        if (Height <= 0 || breadth <= 0) {
            cout << "Error: Height and breadth must be positive." << endl;
            return -1; // Indicate error
        }
        return 0.5 * Height * breadth; // Multiplying to find area
    }

    double Square(double Side) {
        if (Side <= 0) {
            cout << "Error: Side must be positive." << endl;
            return -1; // Indicate error
        }
        return Side * Side; // Multiplying to find area
    }

    double Cuboid(double length, double width, double Height) {
        if (length <= 0 || width <= 0 || Height <= 0) {
            cout << "Error: Length, width, and height must be positive." << endl;
            return -1; // Indicate error
        }
        return length * width * Height; // Multiplying to find volume
    }

    double Cylinder(double radius, double height) {
        if (radius <= 0 || height <= 0) {
            cout << "Error: Radius and height must be positive." << endl;
            return -1; // Indicate error
        }
        return 2 * M_PI * radius * (radius + height); // Multiplying to find surface area
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
        cout << "*****||SOLVER||****" << endl;
        cout << "" << endl;
        cout << "*******************" << endl;
        cout << "" << endl;
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
                        if(num2 != 0)
                            cout << num1 << " / " << num2 << " = " << util.divide(num1, num2) << endl;
                        else
                            cout << "Error: Division by zero." << endl;
                        break;
                    default:
                        cout << "Invalid Response" << endl;
                }
                break;
            }
            case 2: {
                int choice2;
                double num1, num2, num3;
                cout << "\nArea Finder Menu:" << endl;
                cout << "1. Rectangle" << endl;
                cout << "2. Circle" << endl;
                cout << "3. Triangle" << endl;
                cout << "4. Square" << endl;
                cout << "5. Cuboid" << endl;
                cout << "6. Cylinder" << endl;
                cout << "Enter your choice: ";
                cin >> choice2;

                switch (choice2) {
                    case 1:
                        cout << "Enter the length and width of the Rectangle: ";
                        cin >> num1 >> num2;
                        cout << "Area of Rectangle: " << util.rectangleArea(num1, num2) << endl;
                        break;
                    case 2:
                        cout << "Enter the radius of the Circle: ";
                        cin >> num1;
                        cout << "Area of Circle: " << util.circleArea(num1) << endl;
                        break;
                    case 3:
                        cout << "Enter the base and height of the Triangle: ";
                        cin >> num1 >> num2;
                        cout << "Area of Triangle: " << util.Triangle(num1, num2) << endl;
                        break;
                    case 4:
                        cout << "Enter the side of the Square: ";
                        cin >> num1;
                        cout << "Area of Square: " << util.Square(num1) << endl;
                        break;
                    case 5:
                        cout << "Enter the length, width, and height of the Cuboid: ";
                        cin >> num1 >> num2 >> num3;
                        cout << "Volume of Cuboid: " << util.Cuboid(num1, num2, num3) << endl;
                        break;
                    case 6:
                        cout << "Enter the radius and height of the Cylinder: ";
                        cin >> num1 >> num2;
                        cout << "Surface Area of Cylinder: " << util.Cylinder(num1, num2) << endl;
                        break;
                    default:
                        cout << "Invalid Response" << endl;
                }
                break;
            }
            case 3: {
                // Unit converter functions
                double celsius, fahrenheit;
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                fahrenheit = util.convertCelsiusToFahrenheit(celsius);
                cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

                cout << "Enter temperature in Fahrenheit: ";
                cin >> fahrenheit;
                celsius = util.convertFahrenheitToCelsius(fahrenheit);
                cout << "Temperature in Celsius: " << celsius << endl;
                break;
            }
            case 4:
                // Module finder function (exponential modulo)
                int a, b, m;
                cout << "Enter base (a): ";
                cin >> a;
                cout << "Enter exponent (b): ";
                cin >> b;
                cout << "Enter modulo (m): ";
                cin >> m;
                cout << "Result: " << util.expMod(a, b, m) << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    cout << "Thank you for using the SOLVER!" << endl;
    return 0;
}