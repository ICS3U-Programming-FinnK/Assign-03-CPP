#include <iostream>

int main() {
    try {
        // user inputs degrees Celsius to the user.
        float celsius;
        std::cout << "Enter degrees in Celsius: ";
        // terminal will give an error if the input is not a number
        if (!(std::cin >> celsius)) {
            throw std::runtime_error("Invalid input. Please enter a valid numerical value for degrees Celsius.");
        }
        // terminal will process converting from Celsius to Fahrenheit and Kelvin
        float fahrenheit = celsius * 9 / 5 + 32;
        float kelvin = celsius + 273.15;
        // terminal will display the degrees Celsius and the degrees Fahrenheit and Kelvin
        std::cout << "The temperature in Celsius is = " << celsius << " degrees" << std::endl;
        std::cout << "The temperature in Fahrenheit is = " << fahrenheit << " degrees" << std::endl;
        std::cout << "The temperature in Kelvin is = " << kelvin << " degrees" << std::endl;

    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
