//
//  main.cpp
//  Calculator Frameowrk
//
//  Created by Vector Mwendwa on 10/19/21.
//
# include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two values: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Use the operators provided";
            break;
    }

    return 0;
}
