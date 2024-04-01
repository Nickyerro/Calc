#include <iostream>

float adding(float firstNUM, float secondNUM)
{
    return firstNUM + secondNUM;
}

float substracting(float firstNUM, float secondNUM)
{
    return firstNUM - secondNUM;
}

void division(float firstNUM, float secondNUM)
{
    if (secondNUM == 0)
        std::cout << "Impossible to divide by zero";
    else
        std::cout << "Result of substracting: " << firstNUM << " - " << secondNUM << " = " << firstNUM / secondNUM;
}

float multipling(float firstNUM, float secondNUM)
{
    return firstNUM * secondNUM;
}

int main()
{
    float a, b;
    char oper;
    std::cout << "Type two numbers for operation: ";
    std::cin >> a >> b;
    std::cout << "Type sign of operation: ";
    std::cin >> oper;
    switch (oper)
    {
        case '+':
            std::cout << "Result of adding: " << a << " + " << b << " = " << adding(a, b) << std::endl;
            break;
        case '-':
            std::cout << "Result of substracting: " << a << " - " << b << " = " << substracting(a, b) << std::endl;
            break;
        case '/':
            division(a, b);
            std::cout << std::endl;
            break;
        case '*':
            std::cout << "Result of multipling: " << a << " * " << b << " = " << multipling(a, b) << std::endl;
            break;
    default:
        std::cout << "Uncorrect sign of operation\n";
        break;
    }
    return 0;
}
