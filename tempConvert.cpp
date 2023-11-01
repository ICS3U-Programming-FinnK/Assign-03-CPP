#include <iostream>

int main() {
    try {
        float celsius;
        std::cout << "Enter degrees in Celsius: ";

        if (!(std::cin >> celsius)) {
            throw std::runtime_error("Invalid input. Please enter a valid numerical value for degrees Celsius.");
        }

        float fahrenheit = celsius * 9 / 5 + 32;
        float kelvin = celsius + 273.15;

        std::cout << "The temperature in Celsius is = " << celsius << " degrees" << std::endl;
        std::cout << "The temperature in Fahrenheit is = " << fahrenheit << " degrees" << std::endl;
        std::cout << "The temperature in Kelvin is = " << kelvin << " degrees" << std::endl;

    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
