#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
    double result;

public:
    Calculator();
    
    // Basic arithmetic operations
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    
    // Utility functions
    double getResult() const;
    void reset();
};

#endif // CALCULATOR_H
