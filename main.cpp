#include <iostream>

using namespace std;

int main() {
    float x, y;
    int sign;
    cout << "Enter two numbers separated by a space:\n";
    scanf("%f %f", &x, &y);
    cout << "Enter a mathematical symbol:\n";
    scanf("%s", &sign);
    if (sign == '+' || sign == '-'
        || sign == '*' || sign == '/') {
        switch (sign) {
            case '+':
                printf("%.2f", x + y);
                break;
            case '-':
                printf("%.2f", x - y);
                break;
            case '*':
                printf("%.2f", x * y);
                break;
            case '/':
                if (y == 0) {
                    cout << "You can't divide by zero";
                    break;
                } else {
                    printf("%.2f", x / y);
                    break;
                }
        }


    }
}
