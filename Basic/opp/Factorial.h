#ifndef FACTORIAL_H
#define FACTORIAL_H

class FactorialCalculator {
public:
    

    // Function to calculate factorial
    int calculateFactorial(int n){
         if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
    }
};

#endif // FACTORIAL_H
