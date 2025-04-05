#ifndef PHYS_FUNCS_H
#define PHYS_FUNCS_H

const double pi = 3.14159;
const double deg_to_rad = pi / 180.0;
const double gravity = 9.81;

double getUserInput();

double convertToRadians(double angle);

double getRange(double v_0, double theta);

#endif
