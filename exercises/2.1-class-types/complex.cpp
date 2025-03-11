#include "complex.hpp"
#include <cmath>
#include <iostream>
using namespace std;

Complex::Complex(double real) : re(real) {
}

Complex::Complex(double real, double imag) : re(real), im(imag) {
}

double Complex::real() {
    return re;
}

/* Add definition of a member function to access the imaginary component */

double Complex::imaginary() {
    return im;
}

Complex Complex::conj() {
    return Complex{re, -im};
}

/* Add definition of 'norm' member function. Hint: Look up std::sqrt from the
cmath header to help calculate the magnitude of a complex number */
double Complex::norm() {
    return sqrt(re*re + im*im);
}

/* Add definition of 'add' member function */
Complex Complex::add(Complex other_complex) {
    return Complex{re + other_complex.re, im + other_complex.im};
}

bool Complex::equals(Complex other_complex) {
    // Return true if the real and imaginary parts of the complex numbers are
    // equal. False otherwise.
    return re == other_complex.re && im == other_complex.im;
    return false;
}