// Copyright (c) 2022 Spencer Scarlett All rights reserved.
//
// Created by: Spencer Scarlett
// Date: Oct 3, 2022
// Program that calculates Surface Area and Volume of a Sphere
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // Colours for output/input text
#define RESET "\033[0m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define RED "\033[31m"

    // variables
    float radius, surface_area, volume;

    // Requests the radius from the user
    std::string unit;
    std::cout << RED << "What is the radius of the sphere?: " << RESET;
    std::cin >> radius;

    // Calculates Surface area
    surface_area = 4 * M_PI * pow(radius, 2);

    // Calculates Volume
    volume = (4 * pow(radius, 3) * M_PI) / 3;

    // Displays end results with colour and rounded by two points

    std::cout << "\n";

    std::cout << "\n";
    std::cout << BLUE << "The surface area of the sphere is:\n"
              << RESET
              << std::fixed << std::setprecision(2)
              << std::setfill('0') << surface_area << unit << "²";

    std::cout << "\n";
    std::cout << MAGENTA << "The volume of the sphere is:\n"
              << RESET
              << std::fixed << std::setprecision(2)
              << std::setfill('0') << volume << unit << "³";
}
