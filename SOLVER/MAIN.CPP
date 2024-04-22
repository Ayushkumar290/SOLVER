#include <iostream>
using namespace std;

// Function for modulo operation (ensures positive b)
int mod(int a, int b) {
    if (b <= 0) {
        cout << "Error: The second number (b) must be positive." << endl;
        return -1; // Indicate error
    }
    return a % b;
}

// Function for exponential modulo (a^b mod m)
int exp_mod(int a, int b, int m) {
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


int main() {
    int Uwant;
    cout << "******||SOLVER||****** " <<endl;
    cout << "        " <<endl;
    cout << "Use the Serial number to select " <<endl;
    cout << "        " <<endl;
    cout << "1.Calculator" <<endl;
    cout << "2.Unit Converter" <<endl;
    cout << "3.Module Finder" <<endl;
    cout << "4.Area Finder" <<endl;
    cout << "        " <<endl;


    cout << "Enter the Serial Number: " <<endl;
    cin >> Uwant;
    if (Uwant = 1)
    {
        int a, b, m;

    cout << "Enter the base (a): ";
    cin >> a;

    cout << "Enter the exponent (b): ";
    cin >> b;

    cout << "Enter the modulus (m, positive): ";
    cin >> m;

    // Ensure m is positive
    if (m <= 0) {
        cout << "Error: The modulus (m) must be positive." << endl;
        return 1; // Indicate error
    }

    int modulo = mod(a, m);
    if (modulo == -1) {
        return 1; // Error already reported by mod function
    }

    int exp_modulo = exp_mod(modulo, b, m);
    if (exp_modulo == -1) {
        return 1; // Error already reported by exp_mod function
    }

    cout << "The modulo of " << a << " and " << m << " is " << modulo << endl;
    cout << "The exponential modulo of " << a << " raised to the power of " << b << " modulo " << m << " is " << exp_modulo << endl;

    
    }
    

    

    
    return 0;
}