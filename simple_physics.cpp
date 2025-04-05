#include "phys_funcs.h"
#include <iostream>

int main()
{
    // Get an initial velocity and angle from the user
    // Return the range of the thrown projectile, assuming it starts from zero height
    std::cout << "Welcome to the SimplePhysics kinematics calculator!\n";
    std::cout << "Let me calculate the range of your launched projectile.\n";

    // Get the initial velocity
    std::cout << "What is the initial velocity of your particle, in m/s?\n";
    double v_0 {getUserInput()};

    // Get the angle
    std::cout << "What angle theta is the particle launched at, in degrees?\n";
    double theta {getUserInput()};

    // Convert the angle to radians and calculate the range
    double range {getRange(v_0, convertToRadians(theta))};

    // Display the range to the user
    std::cout << "The range of your launched particle is " << range << " meters.\n";
    
    return 0;
}
