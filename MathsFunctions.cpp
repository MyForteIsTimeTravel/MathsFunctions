#include <iostream>

int addition  (int a, int b) { return a + b; }
int subtract  (int a, int b) { return a - b; }
int multiply  (int a, int b) { return a * b; }
int divide    (int a, int b) { return a / b; }
int remainder (int a, int b) { return a % b; }

int main (void) {
    int a, b, c, d, e;
    int max, min;
    
    std::cout << "Enter 1 integer: ";
    std::cin  >> a;
    
    max = a;
    min = a;
    
    std::cout << "Enter 1 integer: ";
    std::cin  >> b;
    
    if (b > max) { max = b; }
    if (b < min) { min = b; }
    
    std::cout << "Enter 1 integer: ";
    std::cin  >> c;
    
    if (c > max) { max = c; }
    if (c < min) { min = c; }
        
    std::cout << "Enter 1 integer: ";
    std::cin  >> d;
    
    if (d > max) { max = d; }
    if (d < min) { min = d; }
    
    std::cout << "Enter 1 integer: ";
    std::cin  >> e;
    
    if (e > max) { max = e; }
    if (e < min) { min = e; }
    
    std::cout << "minimum: " << min << std::endl;
    std::cout << "maximum: " << max << std::endl;
    
}