#include <iostream>
int main() {
    double celsius, fahrenheit;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << std::endl;

}


