// Write a program that outputs the string representation of numbers from 1 to n. But for multiples of three, it should output “Fizz” instead of the number, and for the multiples of five, output “Buzz”. For numbers which are multiples of both three and five, output “FizzBuzz”.

#include <iostream>
#include <vector>
#include <string>

// Function to convert a single digit to its string representation
std::string digitToString(int digit) {
    std::vector<std::string> digitStrings = {
        "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };
    return digitStrings[digit];
}

// Function to convert a number to its string representation
std::string numberToString(int number) {
    if (number == 0) {
        return "zero";
    }

    std::string result = "";
    while (number > 0) {
        int digit = number % 10;
        result = digitToString(digit) + " " + result;
        number /= 10;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (i % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << numberToString(i) << std::endl;
        }
    }

    return 0;
}


