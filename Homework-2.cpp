#include <iostream>
#include <cmath>
#include "Sphere.h"
int main()
{
    float r;
    std::cin >> r;
    sa::Sphere Sp;
    Sp.SetR(r);
    Sp.SurfaceArea();
    Sp.Volume();
}

