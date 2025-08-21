#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // abs(x) - Absolute value
    int absoluteValue = abs(-5);
    std::cout << "abs(-5) = " << absoluteValue << std::endl;

    // acos(x) - Arccosine
    double arccosineValue = acos(0.5);
    std::cout << "acos(0.5) = " << arccosineValue << " radians" << std::endl;

    // asin(x) - Arcsine
    double arcsineValue = asin(0.7);
    std::cout << "asin(0.7) = " << arcsineValue << " radians" << std::endl;

    // atan(x) - Arctangent
    double arctangentValue = atan(1.0);
    std::cout << "atan(1.0) = " << arctangentValue << " radians" << std::endl;

    // cbrt(x) - Cube root
    double cubeRootValue = cbrt(27.0);
    std::cout << "cbrt(27.0) = " << cubeRootValue << std::endl;

    // ceil(x) - Round up
    double ceilValue = ceil(4.3);
    std::cout << "ceil(4.3) = " << ceilValue << std::endl;

    // cos(x) - Cosine
    double cosineValue = cos(0.0);
    std::cout << "cos(0.0) = " << cosineValue << std::endl;

    // cosh(x) - Hyperbolic Cosine
    double hyperbolicCosineValue = cosh(1.0);
    std::cout << "cosh(1.0) = " << hyperbolicCosineValue << std::endl;

    // exp(x) - Exponential
    double exponentialValue = exp(2.0);
    std::cout << "exp(2.0) = " << exponentialValue << std::endl;

    // expm1(x) - exp(x) - 1
    double expMinusOneValue = expm1(2.0);
    std::cout << "expm1(2.0) = " << expMinusOneValue << std::endl;

    // fabs(x) - Absolute value of a floating-point
    double fabsValue = fabs(-3.14);
    std::cout << "fabs(-3.14) = " << fabsValue << std::endl;

    // fdim(x, y) - Positive difference
    double positiveDifference = fdim(5.0, 2.0);
    std::cout << "fdim(5.0, 2.0) = " << positiveDifference << std::endl;

    // floor(x) - Round down
    double floorValue = floor(4.9);
    std::cout << "floor(4.9) = " << floorValue << std::endl;

    // hypot(x, y) - sqrt(x^2 + y^2)
    double hypotenuse = hypot(3.0, 4.0);
    std::cout << "hypot(3.0, 4.0) = " << hypotenuse << std::endl;

    // fma(x, y, z) - x*y+z without losing precision
    double fusedMultiplyAdd = fma(2.0, 3.0, 4.0);
    std::cout << "fma(2.0, 3.0, 4.0) = " << fusedMultiplyAdd << std::endl;

    // fmax(x, y) - Maximum value
    double maxVal = fmax(10.0, 8.0);
    std::cout << "fmax(10.0, 8.0) = " << maxVal << std::endl;

    // fmin(x, y) - Minimum value
    double minVal = fmin(10.0, 8.0);
    std::cout << "fmin(10.0, 8.0) = " << minVal << std::endl;

    // fmod(x, y) - Floating point remainder
    double remainder = fmod(10.5, 3.2);
    std::cout << "fmod(10.5, 3.2) = " << remainder << std::endl;

    // pow(x, y) - x^y
    double power = pow(2.0, 3.0);
    std::cout << "pow(2.0, 3.0) = " << power << std::endl;

    // sin(x) - Sine
    double sineValue = sin(0.0);
    std::cout << "sin(0.0) = " << sineValue << std::endl;

    // sinh(x) - Hyperbolic Sine
    double hyperbolicSineValue = sinh(1.0);
    std::cout << "sinh(1.0) = " << hyperbolicSineValue << std::endl;

    // tan(x) - Tangent
    double tangentValue = tan(0.785398); // 45 degrees in radians
    std::cout << "tan(45 degrees) = " << tangentValue << std::endl;

    // tanh(x) - Hyperbolic Tangent
    double hyperbolicTangentValue = tanh(1.0);
    std::cout << "tanh(1.0) = " << hyperbolicTangentValue << std::endl;
    cout<<round(3.49);
    return 0;
}
