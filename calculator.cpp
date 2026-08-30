#include "calculator.h"
#include <stdexcept>

Calculator::Calculator() : result(0) {}

double Calculator::add(double a, double b) {
	
	// Added by dhrithi in her branch
    result = a + b;
    return result;
}

double Calculator::subtract(double a, double b) {
    result = a - b;
    return result;
}

double Calculator::multiply(double a, double b) {
    result = a * b;
    return result;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    result = a / b;
    return result;
}

double Calculator::getResult() const {
    return result;
}

void Calculator::reset() {
    result = 0;
}
