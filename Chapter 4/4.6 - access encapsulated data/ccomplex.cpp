// CComplex class definition
// file complex.cpp

#include <iostream>
#include "ccomplex.h"

using namespace std;

CComplex::CComplex()
{
    rreal = 0.0;
    iimage = 0.0;
}

CComplex::~CComplex()
{
}

// gets real and imaginary parts of the complex number
void CComplex::GetComplex()
{
    cout << "Enter Real Part: ";
    cin >> rreal;
    cout << "Enter Imaginary Part: ";
    cin >> iimage;
}

// displays the object of class CComplex
void CComplex::DisplayComplex()
{
    cout << rreal;
    if (iimage >= 0)
        cout << " + " << iimage;
    else
        cout << " - " << -iimage;
    cout << "i" << endl;
}

// (1) adds two objects of class CComplex
CComplex CComplex::Add(CComplex Complex1)
{

    CComplex NewComplex;
    NewComplex.rreal = rreal + Complex1.rreal;
    NewComplex.iimage = iimage + Complex1.iimage;

    return NewComplex;
}

// (2) adds two objects of class CComplex
CComplex CComplex::operator+(CComplex Complex1)
{

    CComplex NewComplex;
    NewComplex.rreal = rreal + Complex1.rreal;
    NewComplex.iimage = iimage + Complex1.iimage;

    return NewComplex;
}

// (3) adds float object to one of class CComplex
CComplex COperators::operator+(float float1, CComplex Complex1)
{

    CComplex NewComplex;
    NewComplex.rreal = Complex1.rreal + float1;
    NewComplex.iimage = Complex1.iimage;

    return NewComplex;
}

// (1) subtracts CComplex object form another CComplex object
CComplex CComplex::Subtract(CComplex Complex1)
{

    CComplex NewComplex;
    NewComplex.rreal = rreal - Complex1.rreal;
    NewComplex.iimage = iimage - Complex1.iimage;

    return NewComplex;
}

// (2) subtracts CComplex object form another CComplex object
CComplex CComplex::operator-(CComplex Complex1)
{

    CComplex NewComplex;
    NewComplex.rreal = rreal - Complex1.rreal;
    NewComplex.iimage = iimage - Complex1.iimage;

    return NewComplex;
}

// (3) subtracts object of class CComplex from a float object
CComplex COperators::operator-(float float1, CComplex Complex1)
{

    CComplex NewComplex;
    NewComplex.rreal = float1 - Complex1.rreal;
    NewComplex.iimage = Complex1.iimage;

    return NewComplex;
}
