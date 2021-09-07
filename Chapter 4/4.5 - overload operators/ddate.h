// ddate.h

class DDate
{
private:
    int dday;
    int mmonth;
    int yyear;

public:
    DDate(void);
    ~DDate(void);

    // creates a new DDate object
    // for the specified day, month, and year
    void SetDate(int, int, int);

    // overloaded operator >
    bool operator>(DDate);
    // overloaded operator >=
    bool operator>=(DDate);
    // overloaded operator <
    bool operator<(DDate);
    // overloaded operator <=
    bool operator<=(DDate);
    // overloaded operator ==
    bool operator==(DDate);
    // overloaded operator !=
    bool operator!=(DDate);
};
