#ifndef CPPEX_COMPLEX_COMPLEX_HPP
#define CPPEX_COMPLEX_COMPLEX_HPP

// Simple complex number class
class Complex {
public:
    /* Add declarations to create:
    - A default constructor
    - A constructor using just a real component
    - A constructor using real and imaginary components
    */
    Complex() = default;
    Complex(double re);
    Complex(double re, double im);

    // Access components
    double real();
    /* Add declaration to access the imaginary component */
    double imaginary();

    // Compute the complex conjugate
    Complex conj();

    /* Add declaration for member function 'norm' that takes no arguments and
    returns the magnitude of the complex number.
    */
    double norm();

    /* Add declaration for an 'add' member function as so: z = i.add(j)
    I.e. For complex numbers i and j, z is the result of i + j.
    */
    Complex add(Complex other_complex);

    // Check if two complex numbers are equal
    bool equals(Complex other_complex);
private:
    /* Add private member variables to store the real and imaginary components of
    the complex number. These should have type 'double' and a suitable default
    value.
    */
   double re = 0.0;
   double im = 0.0;
};

#endif