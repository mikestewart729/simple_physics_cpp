#include "phys_funcs.h"
#include <iostream>
#include <cmath>

double getUserInput()
{
    // Prompt the user to enter a value
    std::cout << "Enter your number here: ";

    // Get the user input value and return it
    double user_val {};
    std::cin >> user_val;

    return user_val;
}

double convertToRadians(double degree)
{
    // Convert the input value in degrees to radians 
    // deg * pi / 180 = radians
    return degree * deg_to_rad;
}

double getRange(double v_0, double theta)
{
    // calculate the range of the launched particle
    return (v_0 * v_0 * std::sin(theta)) / gravity;
}
