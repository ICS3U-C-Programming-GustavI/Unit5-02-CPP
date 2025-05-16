// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: May 12, 2025
// This program asks the user for the base and height
// and calculates the area of a triangle.

#include <iostream>
#include <limits>

void CalcArea(float base, float height) {
    float area = 0.5f * base * height;
    std::cout << "\nThe area of the triangle is "
    << area << " cm²" << std::endl;
}

int main() {
    float base, height;

    std::cout << "Enter the base of the triangle (cm): ";
    if (!(std::cin >> base) || base <= 0) {
        std::cout << "Error: Invalid or non-positive base value." << std::endl;
        return 1;
    }

    std::cout << "Enter the height of the triangle (cm): ";
    if (!(std::cin >> height) ||
    height <= 0) {
        std::cout << "Error: Invalid or non-positive"
        "height value." << std::endl;
        return 1;
    }

    CalcArea(base, height);

    return 0;
}
