#include <iostream>
using namespace std;

// Base class
class Calculator {
protected:
    double num1, num2;

public:
    void setNumbers(double a, double b) {
        num1 = a;
        num2 = b;
    }
};

// Derived class
class AdvancedCalculator : public Calculator {
public:
    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
    AdvancedCalculator calc;
    double a, b;
    int choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    calc.setNumbers(a, b);

    cout << "\nSelect Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Result: " << calc.add() << endl;
        break;
    case 2:
        cout << "Result: " << calc.subtract() << endl;
        break;
    case 3:
        cout << "Result: " << calc.multiply() << endl;
        break;
    case 4:
        cout << "Result: " << calc.divide() << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
