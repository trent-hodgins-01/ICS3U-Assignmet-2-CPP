// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/23/2021
// This program calculates the surface area of a sphere
// The user enters the radius


#include <iostream>
#include <cmath>

int main() {
    // this function calculates circumference of a circle
    int radius;
    int surface_area;

    // input
    std::cout << "We will be calculating the surface area of a sphere"
              << std::endl;
    std::cout << "" <<std::endl;
    std::cout << "Enter in the radius (mm): ";
    std::cin >> radius;

    // process
    surface_area = 4 * M_PI * radius * radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Surface Area is " << surface_area << " mm" << std::endl;
    std::cout << "\nDone" << std::endl;
}
