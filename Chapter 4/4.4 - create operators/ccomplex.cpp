// CComplex class definition
// file complex.cpp

#include <iostream>
#include "ccomplex.h"

using namespace std;

CComplex::CComplex(void)
{
    rreal = 0.0;
    iimage = 0.0;
}

CComplex::~CComplex(void) {}

// gets real and imaginary parts of the complex number
void CComplex::GetComplex(void)
{
    cout << "Enter Real Part: ";
    cin >> rreal;
    cout << "Enter Imaginary Part: ";
    cin >> iimage;
}

void CComplex::DisplayComplex(void)
{
    cout << rreal;
    if (iimage >= 0)
        cout << " + " << iimage;
    else
        cout << " - " << -iimage;
    cout << "i" << endl;
}

// adds two objects of class CComplex
CComplex CComplex::operator+(CComplex Complex1)
{
    CComplex NewComplex;
    NewComplex.rreal = rreal + Complex1.rreal;
    NewComplex.iimage = iimage + Complex1.iimage;

    return NewComplex;
}

// subtracts CComplex object from another CComplex object
CComplex CComplex::operator-(CComplex Complex1)
{
    CComplex NewComplex;
    NewComplex.rreal = rreal - Complex1.rreal;
    NewComplex.iimage = iimage - Complex1.iimage;

    return NewComplex;
}