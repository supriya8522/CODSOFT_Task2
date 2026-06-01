#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "=== Simple Calculator ===\n";
    cout << "Enter expression (e.g. 5 + 3): ";
    cin >> a >> op >> b;

    if (op == '+')
        cout << "Result: " << a + b;
    else if (op == '-')
        cout << "Result: " << a - b;
    else if (op == '*')
        cout << "Result: " << a * b;
    else if (op == '/') {
        if (b == 0)
            cout << "Error: Division by zero!";
        else
            cout << "Result: " << a / b;
    } else {
        cout << "Invalid operator! Use +, -, *, /";
    }

    cout << endl;
    return 0;
}
