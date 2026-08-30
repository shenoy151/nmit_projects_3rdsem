#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    
    std::cout << "Simple Calculator Program" << std::endl;
    std::cout << "=========================" << std::endl;
    
    // Test addition
    std::cout << "\nAddition: 10 + 5 = " << calc.add(10, 5) << std::endl;
    
    // Test subtraction
    std::cout << "Subtraction: 10 - 5 = " << calc.subtract(10, 5) << std::endl;
    
    // Test multiplication
    std::cout << "Multiplication: 10 * 5 = " << calc.multiply(10, 5) << std::endl;
    
    // Test division
    std::cout << "Division: 10 / 5 = " << calc.divide(10, 5) << std::endl;
    
    // Test division with error handling
    std::cout << "\nTesting division by zero:" << std::endl;
    try {
        calc.divide(10, 0);
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    // Show current result
    std::cout << "\nCurrent result: " << calc.getResult() << std::endl;
    
    // Reset calculator
    calc.reset();
    std::cout << "After reset: " << calc.getResult() << std::endl;
    
    return 0;
}
