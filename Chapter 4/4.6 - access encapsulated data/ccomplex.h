// CComplex class declaration
// file ccomplex.h

class CComplex
{
private:
    float rreal;
    float iimage;

public:
    friend class COperators;

    CComplex(void);
    ~CComplex(void);

    // access functions
    void GetComplex(void);
    void DisplayComplex(void);

    // arithmetic operations
    CComplex Add(CComplex);
    CComplex Subtract(CComplex);

    // overloaded arithmetic operators
    CComplex operator+(CComplex);
    CComplex operator-(CComplex);

    // friend CComplex COperators::operator+(float, CComplex);
    // friend CComplex COperators::operator-(float, CComplex);
};

class COperators
{
    CComplex operator+(float, CComplex);
    CComplex operator-(float, CComplex);
};
