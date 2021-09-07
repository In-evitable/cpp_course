// CComplex class declaration
// file ccomplex.h

class CComplex
{
private:
    float rreal;
    float iimage;

public:
    CComplex(void);
    ~CComplex(void);

    // access functions
    void GetComplex(void);
    void DisplayComplex(void);

    // arithmetic operations
    CComplex operator+(CComplex);
    CComplex operator-(CComplex);
};