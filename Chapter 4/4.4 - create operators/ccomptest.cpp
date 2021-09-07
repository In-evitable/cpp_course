// file ccomptest.cpp
#include "ccomplex.h"
#include <iostream>

int main()
{
    // define complex numbers
    CComplex TestComplex1, TestComplex2;
    CComplex TestComplex3, TestComplex4;

    // perform keyboard input of Complex1 and Complex2
    TestComplex1.GetComplex();
    TestComplex2.GetComplex();

    // add and subtract Complex1 and Complex2
    TestComplex3 = TestComplex1 + TestComplex2;
    TestComplex4 = TestComplex1 + TestComplex2;

    // display the result
    TestComplex3.DisplayComplex();
    TestComplex4.DisplayComplex();

    system("pause");
    return 0;
}