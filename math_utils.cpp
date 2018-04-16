// partners: Victoria Velasquez, Matthew Louchart, Connor Dowd

#include "math_utils.h"
#include <math.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

bool Math::IsSquare(int num)
{
  int x = sqrt(num);
  if(x == static_cast<int>(x))
    return true;
  else
    return false;
}

int Math::GetDigit(int num, int place)
{
    try {
        int ten_exp = 0;
        while (place != 1) {
            place /= 10;
            ten_exp++;
        }

        std::string num_string = std::to_string(num);
        return (int)num_string[ten_exp-1];
    } catch (const std::exception&) {
        std::cout << "invalid arguement" << std::endl;
        return 0;
    }
}

bool Math::EqualParity(int x, int y)
{
  if(x % 2 && y % 2)
    return true;
  else if (x % 2 != 0 && x % 2 != 0)
    return true;
  else
    return false;
}

bool Math::EqualParity(std::vector nums)
{
    return false;
}

int Math::Quadratic(int x, int a, int b, int c)
{
    inSqrt = b*b - 4*a*c
    if (inSqrt > 0){   
        x1 = (-b + sqrt(b*b - 4*a*c) / (2*a);
        x2 = (-b - sqrt(b*b - 4*a*c) / (2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
              }
    else if (inSqrt == 0) {
        x1 = (-b + sqrt(b*b - 4*a*c) / (2*a);
        cout << "x1 and x2 = " << x1 << endl;
              }
    else {
        cout << "cannot take square root of negative numbers" << endl;
    }
}
