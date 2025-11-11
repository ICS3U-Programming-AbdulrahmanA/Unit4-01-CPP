// Copyright (c) 2025 Abdul All rights reserved.
// Created By : Abdul
// Date : November 11th, 2025
// This program asks the user for the number and then sums all the numbers up.

#include <iostream>
#include <random>
#include <string>

int main() {
    // declare integer to hold random number

    // get the number from the user as a string
    std::string numberAsString;

    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;

    int numberAsInt;

    try {
        // convert the user's number to an int

        numberAsInt = std::stoi(numberAsString);

        int sum = 0;
        int counter = 0;

        // check if the number is positive

        // determine whether or the user can date the grandchild
        if (numberAsInt < 0) {
            std::cout << "Please enter a positive integer " << std::endl;
        } else {
            while (counter <= numberAsInt) {
                sum = sum + counter;
                counter = counter + 1;
            }
            std::cout << "The sum of all numbers from 0 to " << numberAsInt
                      << " is " << sum << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << numberAsString << " is not an integer.\n";
    }
}
