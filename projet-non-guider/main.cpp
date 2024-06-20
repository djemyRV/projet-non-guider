#include "factorial.h"
#include "fibonacci.h"
#include "palindrome.h"
#include "prime.h"
#include "example_class.h"
#include <iostream>
int main() {
    std::cout << "Factorial of 5: " << factorial(5) << std::endl;
    std::cout << "5th Fibonacci number: " << fibonacci(5) <<std::endl;
    std::cout << "Is 'racecar' a palindrome? " << (isPalindrome("racecar") ? "Yes" : "No") << std::endl;
    std::cout << "Is 7 a prime number? " << (isPrime(7) ? "Yes" : "No") << std::endl;   
    ExampleClass example;
    example.setValue(42);
    std::cout << "ExampleClass value: " << example.getValue() << std::endl;   
    return 0;
}
