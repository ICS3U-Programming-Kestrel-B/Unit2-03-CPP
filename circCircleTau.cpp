// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by KestrelBryce
// Date: Sep. 23, 2022
// This program calculates the circumference
// of a circle with user input & tau

#include <iostream>

int main() {
    // Declaring constants
    const float TAU = 6.28;

    // Declaring variables
    float circumference, radius;

    // Input
    std::cout << "This program calculates the\n";
    std::cout << "circumference of a circle using tau.\n";
    std::cout << "\n";
    std::cout << "Enter the radius in cm: ";
    std::cin >> radius;

    // Process
    circumference = TAU * radius;

    // Output
    std::cout << "Circumference = " << circumference << "cm\n";
}
